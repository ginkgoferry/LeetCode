"""LOCAL adapters for tree codecs and the Employee API."""
CODECS = {'297', '449'}
SUPPORTED = CODECS | {'690'}
EMPLOYEE = '''
class Employee {
public:
    int id = 0, importance = 0;
    vector<int> subordinates;
};
'''


def render_case(identifier, spec, case):
    from tools.prepare_environments import literal
    lines = ['    {', '        // 官方样例：平台驱动接口。']
    if identifier in CODECS:
        values = ', '.join('nullopt' if v is None else str(v) for v in (case['args'][0] or []))
        lines += ['        unordered_set<TreeNode*> owned;',
                  f'        TreeNode* root = buildTree(vector<optional<int>>{{{values}}});',
                  '        collectTreeNodes(root, owned); const auto expected = treeToVector(root);',
                  '        string encoded = serializer.serialize(root);',
                  '        TreeNode* localResult = deserializer.deserialize(encoded);',
                  '        assert(treeToVector(localResult) == expected);',
                  '        collectTreeNodes(localResult, owned);',
                  '        for (TreeNode* allocated : owned) delete allocated;']
    elif identifier == '690':
        lines += ['        vector<Employee*> employees;']
        for record in case['args'][0]:
            lines += ['        {', '            Employee* fresh = new Employee;',
                      f'            fresh->id = {record[0]}; fresh->importance = {record[1]};',
                      f"            fresh->subordinates = {literal(record[2], 'integer[]')};",
                      '            employees.push_back(fresh);', '        }']
        lines += [f"        auto localResult = solution.getImportance(employees, {case['args'][1]});",
                  f"        assert(localResult == {case['expected']});",
                  '        for (Employee* allocated : employees) delete allocated;']
    else: raise ValueError(identifier)
    return '\n'.join(lines + ['    }'])
