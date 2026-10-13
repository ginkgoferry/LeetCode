"""Property assertions for problems with multiple valid answers.

These are LOCAL test predicates, not reference implementations of solutions.
Optimal lengths/cardinalities come from the official fixture outputs.
"""
from __future__ import annotations
from tools import constructive_validators, tree_validators

SUPPORTED = {'210','2392','1203','LCR 114','753','2097','1042','1092','368','2901','943','2732','2903','2905','1441','1249','1111','984','767','1054','1405','1488'}
SUPPORTED.update({'1317', '1968', '3680', '470', '166', '2099', '870'})
SUPPORTED.update(constructive_validators.SUPPORTED)
SUPPORTED.update(tree_validators.SUPPORTED)


def snapshots(identifier: str) -> list[str]:
    if identifier in tree_validators.SUPPORTED:
        return tree_validators.snapshots(identifier)
    if identifier in constructive_validators.SUPPORTED:
        return constructive_validators.snapshots(identifier)
    mapping = {
        '210': [('prerequisites','localOriginalPrerequisites')],
        '2392': [('rowConditions','localOriginalRows'),('colConditions','localOriginalCols')],
        '1203': [('group','localOriginalGroup'),('beforeItems','localOriginalDependencies')],
        'LCR 114': [('words','localOriginalWords')],
        '2097': [('pairs','localOriginalPairs')],
        '1042': [('paths','localOriginalPaths')],
        '1092': [('str1','localOriginalFirst'),('str2','localOriginalSecond')],
        '368': [('nums','localOriginalNumbers')],
        '2901': [('words','localOriginalWords'),('groups','localOriginalGroups')],
        '943': [('words','localOriginalWords')],
        '2732': [('grid','localOriginalGrid')],
        '2903': [('nums','localOriginalNumbers')],
        '2905': [('nums','localOriginalNumbers')],
        '1441': [('target','localOriginalTarget')],
        '1249': [('s','localOriginalString')],
        '1111': [('seq','localOriginalSequence')],
        '767': [('s','localOriginalString')],
        '1054': [('barcodes','localOriginalBarcodes')],
        '1488': [('rains','localOriginalRains')],
        '1968': [('nums','localOriginalNumbers')],
        '2099': [('nums','localOriginalNumbers')],
        '870': [('nums1','localOriginalFirst'), ('nums2','localOriginalSecond')],
    }
    return [f'const auto {dest} = {src};' for src,dest in mapping.get(identifier, [])]


def statements(identifier: str, case: dict) -> list[str]:
    if identifier in tree_validators.SUPPORTED:
        return tree_validators.statements(identifier, case)
    if identifier in constructive_validators.SUPPORTED:
        return constructive_validators.statements(identifier, case)
    if identifier == '2099':
        return ['assert(localResult.size() == static_cast<size_t>(k));',
                f"assert(accumulate(localResult.begin(), localResult.end(), 0LL) == {sum(case['expected'])}LL);",
                'size_t position = 0;',
                'for (int value : localOriginalNumbers) if (position < localResult.size() && localResult[position] == value) ++position;',
                'assert(position == localResult.size());']
    if identifier == '870':
        optimum = sum(a > b for a, b in zip(case['expected'], case['args'][1], strict=True))
        return ['auto sortedInput = localOriginalFirst; auto sortedOutput = localResult;',
                'sort(sortedInput.begin(), sortedInput.end()); sort(sortedOutput.begin(), sortedOutput.end());',
                'assert(sortedInput == sortedOutput);', 'int advantages = 0;',
                'for (size_t i = 0; i < localResult.size(); ++i) advantages += localResult[i] > localOriginalSecond[i];',
                f'assert(advantages == {optimum});']
    if identifier == '166':
        import json
        return [f"const string fixture = {json.dumps(case['expected'])};"] + '''
assert(localResult.size() < 10000);
struct Decimal { bool negative; string whole, prefix, period; };
auto parseDecimal = [](const string& value) {
    Decimal parsed{false, "", "", "0"}; size_t position = 0;
    if (!value.empty() && value[0] == '-') { parsed.negative = true; ++position; }
    auto digits = [&]() { string part; while (position < value.size() && value[position] >= '0' && value[position] <= '9') part += value[position++]; return part; };
    parsed.whole = digits(); assert(!parsed.whole.empty());
    auto first = parsed.whole.find_first_not_of('0');
    parsed.whole = first == string::npos ? "0" : parsed.whole.substr(first);
    if (position < value.size()) {
        assert(value[position++] == '.'); parsed.prefix = digits();
        if (position < value.size()) {
            assert(value[position++] == '('); parsed.period = digits();
            assert(!parsed.period.empty() && position < value.size() && value[position++] == ')');
        } else assert(!parsed.prefix.empty());
    }
    assert(position == value.size());
    if (parsed.whole == "0" && parsed.prefix.find_first_not_of('0') == string::npos && parsed.period.find_first_not_of('0') == string::npos) parsed.negative = false;
    return parsed;
};
auto actual = parseDecimal(localResult); auto expected = parseDecimal(fixture);
assert(actual.negative == expected.negative && actual.whole == expected.whole);
if (fixture.find('(') == string::npos) assert(localResult.find('(') == string::npos);
auto digitAt = [](const Decimal& value, size_t position) {
    return position < value.prefix.size() ? value.prefix[position] : value.period[(position - value.prefix.size()) % value.period.size()];
};
// Compare periodic digit streams exactly, using the official output as the fixture.
size_t limit = max(actual.prefix.size(), expected.prefix.size()) + actual.period.size() + expected.period.size();
for (size_t i = 0; i < limit; ++i) assert(digitAt(actual, i) == digitAt(expected, i));
'''.strip().splitlines()
    if identifier == '470':
        return ['assert(localResult.size() == static_cast<size_t>(n));',
                'for (int value : localResult) assert(value >= 1 && value <= 10);']
    if identifier == '1317':
        return ['assert(localResult.size() == 2);',
                'assert(localResult[0] > 0 && localResult[1] > 0 && localResult[0] + localResult[1] == n);',
                "for (int value : localResult) assert(to_string(value).find('0') == string::npos);"]
    if identifier == '1968':
        return ['auto sortedInput = localOriginalNumbers; auto sortedOutput = localResult;',
                'sort(sortedInput.begin(), sortedInput.end()); sort(sortedOutput.begin(), sortedOutput.end());',
                'assert(sortedInput == sortedOutput);',
                'for (size_t i = 1; i + 1 < localResult.size(); ++i)',
                '    assert(2LL * localResult[i] != static_cast<long long>(localResult[i-1]) + localResult[i+1]);']
    if identifier == '3680':
        if not case['expected']:
            return ['assert(localResult.empty());']
        return ['assert(localResult.size() == static_cast<size_t>(n * (n - 1)));',
                'set<pair<int, int>> matches;',
                'for (size_t i = 0; i < localResult.size(); ++i) {',
                '    const auto& match = localResult[i]; assert(match.size() == 2);',
                '    int home = match[0], away = match[1];',
                '    assert(home >= 0 && home < n && away >= 0 && away < n && home != away);',
                '    assert(matches.insert({home, away}).second);',
                '    if (i) for (int team : localResult[i-1]) assert(team != home && team != away);',
                '}']
    if identifier == '1488':
        if not case['expected']:
            return ['assert(localResult.empty());']
        return [
            'assert(localResult.size() == localOriginalRains.size());',
            'set<int> fullLakes;',
            'for (size_t i = 0; i < localResult.size(); ++i) {',
            '    if (localOriginalRains[i] > 0) {',
            '        assert(localResult[i] == -1 && !fullLakes.count(localOriginalRains[i]));',
            '        fullLakes.insert(localOriginalRains[i]);',
            '    } else {',
            '        assert(localResult[i] >= 1 && localResult[i] <= 1000000000);',
            '        fullLakes.erase(localResult[i]);',
            '    }',
            '}',
        ]
    if identifier in ('984', '1405'):
        if identifier == '984':
            counts = ['assert(count(localResult.begin(), localResult.end(), \'a\') == a);',
                      'assert(count(localResult.begin(), localResult.end(), \'b\') == b);',
                      "for (char ch : localResult) assert(ch == 'a' || ch == 'b');"]
        else:
            counts = [f"assert(count(localResult.begin(), localResult.end(), '{ch}') <= {ch});" for ch in 'abc']
            counts += ["for (char ch : localResult) assert(ch == 'a' || ch == 'b' || ch == 'c');"]
        return [f"assert(localResult.size() == {len(case['expected'])});"] + counts + [
            'for (size_t i = 2; i < localResult.size(); ++i)',
            '    assert(localResult[i] != localResult[i-1] || localResult[i] != localResult[i-2]);',
        ]
    if identifier in ('767', '1054'):
        if identifier == '767' and not case['expected']:
            return ['assert(localResult.empty());']
        original = 'localOriginalString' if identifier == '767' else 'localOriginalBarcodes'
        return [
            f'assert(localResult.size() == {original}.size());',
            f'auto sortedInput = {original}; auto sortedOutput = localResult;',
            'sort(sortedInput.begin(), sortedInput.end()); sort(sortedOutput.begin(), sortedOutput.end());',
            'assert(sortedInput == sortedOutput);',
            'for (size_t i = 1; i < localResult.size(); ++i) assert(localResult[i] != localResult[i-1]);',
        ]
    if identifier == '1441':
        return [
            'vector<int> localStack; int nextValue = 1;',
            'for (const auto& operation : localResult) {',
            '    assert(localStack != localOriginalTarget);',
            '    if (operation == "Push") { assert(nextValue <= n); localStack.push_back(nextValue++); }',
            '    else { assert(operation == "Pop" && !localStack.empty()); localStack.pop_back(); }',
            '}',
            'assert(localStack == localOriginalTarget);',
        ]
    if identifier == '1249':
        return [
            f"assert(localResult.size() == {len(case['expected'])});",
            'size_t position = 0;',
            'for (char ch : localOriginalString) {',
            '    if (position < localResult.size() && localResult[position] == ch) ++position;',
            "    else assert(ch == '(' || ch == ')');",
            '}',
            'assert(position == localResult.size());',
            'int depth = 0;',
            "for (char ch : localResult) { if (ch == '(') ++depth; if (ch == ')') --depth; assert(depth >= 0); }",
            'assert(depth == 0);',
        ]
    if identifier == '1111':
        depths = [0, 0]
        optimum = 0
        for character, group in zip(case['args'][0], case['expected'], strict=True):
            depths[group] += 1 if character == '(' else -1
            optimum = max(optimum, depths[group])
        return [
            'assert(localResult.size() == localOriginalSequence.size());',
            'int depths[2] = {0, 0}; int maximum = 0;',
            'for (size_t i = 0; i < localResult.size(); ++i) {',
            '    int group = localResult[i]; assert(group == 0 || group == 1);',
            "    depths[group] += localOriginalSequence[i] == '(' ? 1 : -1;",
            '    assert(depths[group] >= 0); maximum = max(maximum, depths[group]);',
            '}',
            f'assert(depths[0] == 0 && depths[1] == 0 && maximum == {optimum});',
        ]
    if identifier in ('2903', '2905'):
        if case['expected'] == [-1, -1]:
            return ['assert((localResult == vector<int>{-1, -1}));']
        return [
            'assert(localResult.size() == 2);',
            'int i = localResult[0], j = localResult[1];',
            'assert(i >= 0 && j >= 0 && static_cast<size_t>(i) < localOriginalNumbers.size() && static_cast<size_t>(j) < localOriginalNumbers.size());',
            'assert(abs(i - j) >= indexDifference);',
            'assert(abs(static_cast<long long>(localOriginalNumbers[i]) - localOriginalNumbers[j]) >= valueDifference);',
        ]
    if identifier == '210':
        if not case['expected']:return ['assert(localResult.empty());']
        return [
            'assert(localResult.size() == static_cast<size_t>(numCourses));',
            'vector<int> ranks(numCourses, -1);',
            'for (int i = 0; i < numCourses; ++i) {',
            '    int course = localResult[i];',
            '    assert(course >= 0 && course < numCourses && ranks[course] == -1);',
            '    ranks[course] = i;',
            '}',
            'for (const auto& edge : localOriginalPrerequisites) assert(ranks[edge[1]] < ranks[edge[0]]);',
        ]
    if identifier == '2392':
        if not case['expected']:return ['assert(localResult.empty());']
        return [
            'assert(localResult.size() == static_cast<size_t>(k));',
            'vector<int> rows(k + 1, -1), cols(k + 1, -1);',
            'for (int r = 0; r < k; ++r) {',
            '    assert(localResult[r].size() == static_cast<size_t>(k));',
            '    for (int c = 0; c < k; ++c) {',
            '        int value = localResult[r][c];',
            '        assert(value >= 0 && value <= k);',
            '        if (value) { assert(rows[value] == -1); rows[value] = r; cols[value] = c; }',
            '    }',
            '}',
            'for (int value = 1; value <= k; ++value) assert(rows[value] >= 0);',
            'for (const auto& edge : localOriginalRows) assert(rows[edge[0]] < rows[edge[1]]);',
            'for (const auto& edge : localOriginalCols) assert(cols[edge[0]] < cols[edge[1]]);',
        ]
    if identifier == '1203':
        if not case['expected']:return ['assert(localResult.empty());']
        return [
            'assert(localResult.size() == static_cast<size_t>(n));',
            'vector<int> ranks(n, -1), first(m, n), last(m, -1), counts(m, 0);',
            'for (int i = 0; i < n; ++i) {',
            '    int item = localResult[i];',
            '    assert(item >= 0 && item < n && ranks[item] == -1); ranks[item] = i;',
            '    int g = localOriginalGroup[item];',
            '    if (g >= 0) { first[g] = min(first[g], i); last[g] = max(last[g], i); ++counts[g]; }',
            '}',
            'for (int item = 0; item < n; ++item)',
            '    for (int before : localOriginalDependencies[item]) assert(ranks[before] < ranks[item]);',
            'for (int g = 0; g < m; ++g) if (counts[g]) assert(last[g] - first[g] + 1 == counts[g]);',
        ]
    if identifier == 'LCR 114':
        if not case['expected']:return ['assert(localResult.empty());']
        return [
            'set<char> alphabet;',
            'for (const auto& word : localOriginalWords) for (char ch : word) alphabet.insert(ch);',
            'assert(localResult.size() == alphabet.size());',
            'map<char, int> ranks;',
            'for (size_t i = 0; i < localResult.size(); ++i) {',
            '    char ch = localResult[i]; assert(alphabet.count(ch) && !ranks.count(ch)); ranks[ch] = static_cast<int>(i);',
            '}',
            'for (size_t i = 1; i < localOriginalWords.size(); ++i) {',
            '    const auto& a = localOriginalWords[i-1]; const auto& b = localOriginalWords[i];',
            '    size_t common = 0; while (common < min(a.size(), b.size()) && a[common] == b[common]) ++common;',
            '    if (common == min(a.size(), b.size())) assert(a.size() <= b.size());',
            '    else assert(ranks[a[common]] < ranks[b[common]]);',
            '}',
        ]
    if identifier == '753':
        return [
            'size_t combinations = 1; for (int i = 0; i < n; ++i) combinations *= k;',
            'assert(localResult.size() == combinations + n - 1);',
            "for (char ch : localResult) assert(ch >= '0' && ch < '0' + k);",
            'set<string> observed;',
            'for (size_t i = 0; i + n <= localResult.size(); ++i) observed.insert(localResult.substr(i, n));',
            'assert(observed.size() == combinations);',
        ]
    if identifier == '2097':
        return [
            'assert(localResult.size() == localOriginalPairs.size());',
            'for (const auto& edge : localResult) assert(edge.size() == 2);',
            'auto sortedResult = localResult; auto sortedInput = localOriginalPairs;',
            'sort(sortedResult.begin(), sortedResult.end()); sort(sortedInput.begin(), sortedInput.end());',
            'assert(sortedResult == sortedInput);',
            'for (size_t i = 1; i < localResult.size(); ++i) assert(localResult[i-1][1] == localResult[i][0]);',
        ]
    if identifier == '1042':
        return [
            'assert(localResult.size() == static_cast<size_t>(n));',
            'for (int color : localResult) assert(color >= 1 && color <= 4);',
            'for (const auto& edge : localOriginalPaths) assert(localResult[edge[0]-1] != localResult[edge[1]-1]);',
        ]
    if identifier in ('1092','943'):
        lines=[f"assert(localResult.size() == {len(case['expected'])});"]
        if identifier == '943':return lines+['for (const auto& word : localOriginalWords) assert(localResult.find(word) != string::npos);']
        return lines+[
            'for (const string& target : {localOriginalFirst, localOriginalSecond}) {',
            '    size_t position = 0;',
            '    for (char ch : localResult) if (position < target.size() && target[position] == ch) ++position;',
            '    assert(position == target.size());',
            '}',
        ]
    if identifier == '368':
        return [
            f"assert(localResult.size() == {len(case['expected'])});",
            'set<int> seen;',
            'for (int value : localResult) {',
            '    assert(find(localOriginalNumbers.begin(), localOriginalNumbers.end(), value) != localOriginalNumbers.end());',
            '    assert(seen.insert(value).second);',
            '}',
            'for (int a : localResult) for (int b : localResult) assert(a % b == 0 || b % a == 0);',
        ]
    if identifier == '2901':
        return [
            f"assert(localResult.size() == {len(case['expected'])});",
            'vector<size_t> possible;',
            'for (size_t step = 0; step < localResult.size(); ++step) {',
            '    vector<size_t> next;',
            '    for (size_t i = 0; i < localOriginalWords.size(); ++i) {',
            '        if (localOriginalWords[i] != localResult[step]) continue;',
            '        if (step == 0) { next.push_back(i); continue; }',
            '        for (size_t previous : possible) {',
            '            if (previous >= i || localOriginalGroups[previous] == localOriginalGroups[i]) continue;',
            '            const auto& a = localOriginalWords[previous]; const auto& b = localOriginalWords[i];',
            '            if (a.size() != b.size()) continue;',
            '            int distance = 0; for (size_t p = 0; p < a.size(); ++p) distance += a[p] != b[p];',
            '            if (distance == 1) { next.push_back(i); break; }',
            '        }',
            '    }',
            '    assert(!next.empty()); possible = std::move(next);',
            '}',
        ]
    if identifier == '2732':
        if not case['expected']:return ['assert(localResult.empty());']
        return [
            'assert(!localResult.empty());',
            'set<int> rows;',
            'for (int row : localResult) {',
            '    assert(row >= 0 && static_cast<size_t>(row) < localOriginalGrid.size());',
            '    assert(rows.insert(row).second);',
            '}',
            'for (size_t col = 0; col < localOriginalGrid[0].size(); ++col) {',
            '    size_t ones = 0; for (int row : localResult) ones += localOriginalGrid[row][col];',
            '    assert(ones <= localResult.size() / 2);',
            '}',
        ]
    raise ValueError('Unsupported property validator: '+identifier)
