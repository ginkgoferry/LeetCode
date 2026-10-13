"""Parse official example fixtures from cached public problem descriptions."""
import json,re,html
from pathlib import Path
class ParseError(Exception):pass
INPUT_LABEL=r'(?:输入|Input)(?:\s*[:：]|\s+(?=[\[\{\"\d\-]))'
OUTPUT_LABEL=r'(?:输出|Output)(?:\s*[:：]|\s+(?=[\[\{\"\d\-]))'


def text_from_html(value):
 value=re.sub(r'</?(?:p|pre|div|li|br|h\d)[^>]*>', '\n', value,flags=re.I)
 text=html.unescape(re.sub(r'</?[A-Za-z][^>]*>','',value)).replace('\xa0',' ')
 text=re.sub(r'[\x00-\x08\x0b\x0c\x0e-\x1f]', '', text)
 text=re.sub(r'\*\*(输入|输出|Input|Output)(?:\*\*)?\s*([:：])\s*(?:\*\*)?', r'\1\2', text)
 return text

def decode(value):
 value=value.strip().lstrip('>` ')
 value=re.sub(r'^\w+\s*=\s*', '', value)
 value=re.sub(r'^(True|False)\b', lambda m:m[1].lower(), value)
 if value.startswith("'"):
  import ast
  match=re.match(r"'(?:\\.|[^'\\])*'",value)
  if not match:raise ParseError('invalid quoted character')
  return ast.literal_eval(match[0])
 if value.startswith('{'):value=value.replace('{','[').replace('}',']')
 try:return json.JSONDecoder().raw_decode(value)[0]
 except Exception as e:
  if value.startswith('[') or value.startswith('{'):
   depth=0;quote=None;escaped=False
   for i,ch in enumerate(value):
    if quote:
     if escaped:escaped=False
     elif ch=='\\':escaped=True
     elif ch==quote:quote=None
    elif ch in ('"',"'"):quote=ch
    elif ch in '[{':depth+=1
    elif ch in ']}':
     depth-=1
     if depth==0:
      try:
       import ast
       return ast.literal_eval(value[:i+1])
      except (ValueError,SyntaxError):break
  raise ParseError(value[:100]) from e

def parse(q):
 m=json.loads(q['metaData']);text=text_from_html(q['translatedContent'] or q['content'] or '')
 # Two public translated descriptions have misspelled output labels.
 if str(q['questionFrontendId']) == '2360':text=text.replace('输出去：', '输出：')
 if str(q['questionFrontendId']) == '858':text=re.sub(r'(输入：p = 3, q = 1\s+)输入：1', r'\1输出：1', text)
 if str(q['questionFrontendId']) == '470':
  m['return']={'type':'integer[]'} # The platform collects n calls to the no-argument rand10 API.
 # C array-size arguments are absent from the C++ API and example transcripts.
 for method in [m, m.get('constructor', {})] + m.get('methods', []):
  if 'params' in method:
   method['params']=[p for p in method['params'] if p.get('lang') in (None, 'cpp')]
 if m.get('systemdesign'):
  return parse_design(m,text)
 cases=[]
 example=re.search(r'(?:示例|Example)\s*\d*',text)
 if example:text=text[example.start():]
 chunks=re.split(INPUT_LABEL,text)[1:]
 for chunk in chunks:
  parts=re.split(OUTPUT_LABEL,chunk,maxsplit=1)
  if len(parts)!=2:
   if any(re.search(r'\b'+re.escape(p['name'])+r'\s*=\s*',chunk) for p in m['params']):
    raise ParseError('example input has no output')
   continue
  inp,out=parts
  values=[]
  for param in m['params']:
   v=re.search(r'\b'+re.escape(param['name'])+r'\s*=\s*',inp,re.I)
   if not v:break
   values.append(decode(inp[v.end():]))
  if len(values)!=len(m['params']):
   if str(q['questionFrontendId'])=='面试题 16.03':
    points=re.findall(r'\{[^}]*\}',inp)
    if len(points)!=4:raise ParseError('intersection needs four endpoints')
    values=[decode(point) for point in points]
   elif str(q['questionFrontendId'])=='面试题 16.06':values=[[1,3,15,11,2],[23,127,235,19,8]]
   else:
    assignments=list(re.finditer(r'\b[A-Za-z][A-Za-z0-9_]*\s*=\s*',inp))
    if len(m['params'])==1 and inp.strip().startswith(('[','{','"',"'")):values=[decode(inp)]
    elif len(assignments)==len(m['params']):values=[decode(inp[a.end():]) for a in assignments]
    elif len(assignments)==len(m['params'])-1 and inp.strip().startswith(('[','{')):
     values=[decode(inp)]+[decode(inp[a.end():]) for a in assignments]
    elif len(m['params'])==1:values=[decode(inp)]
    else:raise ParseError('input '+inp[:180])
  if str(q['questionFrontendId']) == '160':
   match=re.match(r"Intersected at '(\d+)'",out.strip())
   if match:expected=int(match[1])
   elif out.strip().startswith('No intersection'):expected=None
   else:raise ParseError('unrecognized intersection feedback')
  elif str(q['questionFrontendId']) == '142':
   match=re.match(r'返回索引为 (\d+) 的链表节点',out.strip())
   if match:expected=int(match[1])
   elif out.strip().startswith('返回 null'):expected=None
   else:raise ParseError('unrecognized cycle feedback')
  elif str(q['questionFrontendId']) == '843':
   if not out.strip().startswith('You guessed the secret word correctly.'):
    raise ParseError('unrecognized Master platform feedback')
   expected=True
  elif str(q['questionFrontendId']) in ('116','117'):
   expected=decode(re.sub(r'(?<=[\[,])\s*#\s*(?=[,\]])', 'null', out))
  else:expected=decode(out)
  case={'args':values,'expected':expected}
  if m.get('output',{}).get('size')=='ret':
   output_param=m['params'][m['output']['paramindex']]['name']
   match=re.search(r'\b'+output_param+r'\s*=\s*',out)
   if match:
    raw=out[match.end():].split(']',1)[0]+']'
    prefix=decode(raw.replace('_','null'))[:expected]
    case['prefix']=prefix
   else:raise ParseError('missing prefix '+out[:100])
  cases.append(case)
 if not cases and str(q['questionFrontendId']) == '480':
  # This older official description presents the fixture as prose and a table.
  nums=re.search(r'nums\s*=\s*(\[[^\]]+\])',text)
  window=re.search(r'k\s*=\s*(\d+)',text)
  result=re.search(r'中位数数组\s*(\[[^\]]+\])',text)
  if nums and window and result:
   cases=[{'args':[decode(nums[1]),int(window[1])],'expected':decode(result[1])}]
 if not cases:raise ParseError('no examples')
 return m,cases


def parse_design(metadata, text):
 cases=[]
 for chunk in re.split(INPUT_LABEL,text)[1:]:
  parts=re.split(OUTPUT_LABEL,chunk,maxsplit=1)
  if len(parts)!=2:
   if any(re.search(r'\b'+re.escape(p['name'])+r'\s*=\s*',chunk) for p in m['params']):
    raise ParseError('example input has no output')
   continue
  inp,out=parts
  first=inp.find('[')
  if first<0:continue
  decoder=json.JSONDecoder()
  commands,end=decoder.raw_decode(inp[first:])
  remainder=inp[first+end:].strip()
  second=remainder.find('[')
  arguments=decode(remainder[second:])
  expected=decode(out)
  if not isinstance(commands,list) or len(commands)!=len(arguments) or len(commands)!=len(expected):
   raise ParseError('invalid design transcript')
  cases.append({'commands':commands,'args':arguments,'expected':expected})
 if not cases:
  # Older design prompts annotate each method call with its official result.
  classname=metadata.get('classname','')
  constructor=re.search(r'\bnew\s+'+re.escape(classname)+r'\(([^()]*)\)',text) if classname else None
  if constructor:
   commands=[classname];arguments=[decode('['+constructor[1]+']')];expected=[None]
   methods={m['name'] for m in metadata.get('methods',[])}
   for call in re.finditer(r'\b\w+\.(\w+)\(([^()]*)\);\s*//\s*(?:返回|return)\s+([^\n]+)',text):
    if call[1] not in methods:continue
    commands.append(call[1]);arguments.append(decode('['+call[2]+']'));expected.append(decode(call[3]))
   if len(commands)>1:cases=[{'commands':commands,'args':arguments,'expected':expected}]
 if not cases:raise ParseError('no design transcripts')
 return metadata,cases
