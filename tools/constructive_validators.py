"""LOCAL predicates for constructed outputs, using fixture optima when needed."""
SUPPORTED = {'3311','1304','3963','3988','942','1253','969','1605','667','1980','932','1982'}


def snapshots(identifier):
    mapping = {'3311': [('edges','localOriginalEdges')], '969': [('arr','localOriginalArray')],
               '1605': [('rowSum','localOriginalRows'),('colSum','localOriginalCols')],
               '1980': [('nums','localOriginalStrings')], '1982': [('sums','localOriginalSums')]}
    return [f'const auto {dest} = {src};' for src, dest in mapping.get(identifier, [])]


def statements(identifier, case):
    if identifier == '1304':
        return ['assert(localResult.size() == static_cast<size_t>(n));',
                'assert(set<int>(localResult.begin(), localResult.end()).size() == localResult.size());',
                'assert(accumulate(localResult.begin(), localResult.end(), 0LL) == 0);']
    if identifier in ('942','667','932'):
        size = 's.size() + 1' if identifier == '942' else 'static_cast<size_t>(n)'
        first = 0 if identifier == '942' else 1
        lines = [f'assert(localResult.size() == {size});', 'set<int> values;',
                 f'for (int value : localResult) {{ assert(value >= {first} && value < static_cast<int>(localResult.size()) + {first}); assert(values.insert(value).second); }}']
        if identifier == '942':
            return lines + ["for (size_t i = 0; i < s.size(); ++i) assert(s[i] == 'I' ? localResult[i] < localResult[i+1] : localResult[i] > localResult[i+1]);"]
        if identifier == '667':
            return lines + ['set<int> differences;', 'for (size_t i = 1; i < localResult.size(); ++i) differences.insert(abs(localResult[i] - localResult[i-1]));',
                            'assert(differences.size() == static_cast<size_t>(k));']
        return lines + ['vector<int> position(n + 1);', 'for (int i = 0; i < n; ++i) position[localResult[i]] = i;',
                        'for (int i = 0; i < n; ++i) for (int j = i + 1; j < n; ++j) {',
                        '    int sum = localResult[i] + localResult[j];',
                        '    if (sum % 2 == 0) assert(position[sum / 2] < i || position[sum / 2] > j);', '}']
    if identifier == '1980':
        return ['assert(localResult.size() == localOriginalStrings.size());',
                "for (char ch : localResult) assert(ch == '0' || ch == '1');",
                'assert(find(localOriginalStrings.begin(), localOriginalStrings.end(), localResult) == localOriginalStrings.end());']
    if identifier == '969':
        return ['assert(localResult.size() <= 10 * localOriginalArray.size());', 'auto replay = localOriginalArray;',
                'for (int length : localResult) { assert(length >= 1 && static_cast<size_t>(length) <= replay.size()); reverse(replay.begin(), replay.begin() + length); }',
                'assert(is_sorted(replay.begin(), replay.end()));']
    if identifier == '1982':
        return ['assert(localResult.size() == static_cast<size_t>(n));', 'vector<int> observed{0};',
                'for (int value : localResult) { size_t size = observed.size(); for (size_t i = 0; i < size; ++i) observed.push_back(observed[i] + value); }',
                'auto expected = localOriginalSums;', 'sort(observed.begin(), observed.end()); sort(expected.begin(), expected.end());',
                'assert(observed == expected);']
    if identifier in ('3963','3988'):
        if not case['expected']:
            return ['assert(localResult.empty());']
        target = '1' if identifier == '3963' else 'k'
        return ['assert(localResult.size() == static_cast<size_t>(m));',
                "for (const auto& row : localResult) { assert(row.size() == static_cast<size_t>(n)); for (char ch : row) assert(ch == '.' || ch == '#'); }",
                'vector<vector<int>> paths(m, vector<int>(n));',
                'for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) {',
                "    if (localResult[i][j] == '#') continue;",
                '    if (i == 0 && j == 0) paths[i][j] = 1;',
                f'    else paths[i][j] = min({target} + 1, (i ? paths[i-1][j] : 0) + (j ? paths[i][j-1] : 0));',
                '}', f'assert(paths[m-1][n-1] == {target});']
    if identifier == '1253':
        if not case['expected']:
            return ['assert(localResult.empty());']
        return ['assert(localResult.size() == 2);',
                'for (const auto& row : localResult) { assert(row.size() == colsum.size()); for (int value : row) assert(value == 0 || value == 1); }',
                'assert(accumulate(localResult[0].begin(), localResult[0].end(), 0) == upper);',
                'assert(accumulate(localResult[1].begin(), localResult[1].end(), 0) == lower);',
                'for (size_t j = 0; j < colsum.size(); ++j) assert(localResult[0][j] + localResult[1][j] == colsum[j]);']
    if identifier == '1605':
        return ['assert(localResult.size() == localOriginalRows.size());',
                'vector<long long> columns(localOriginalCols.size());',
                'for (size_t i = 0; i < localResult.size(); ++i) {',
                '    assert(localResult[i].size() == localOriginalCols.size());',
                '    assert(accumulate(localResult[i].begin(), localResult[i].end(), 0LL) == localOriginalRows[i]);',
                '    for (size_t j = 0; j < columns.size(); ++j) { assert(localResult[i][j] >= 0); columns[j] += localResult[i][j]; }',
                '}', 'for (size_t j = 0; j < columns.size(); ++j) assert(columns[j] == localOriginalCols[j]);']
    if identifier == '3311':
        return ['assert(!localResult.empty() && !localResult[0].empty());',
                'size_t rows = localResult.size(), cols = localResult[0].size(); assert(rows * cols == static_cast<size_t>(n));',
                'set<int> nodes; set<pair<int,int>> observedEdges, expectedEdges;',
                'for (const auto& edge : localOriginalEdges) expectedEdges.insert(minmax(edge[0], edge[1]));',
                'for (const auto& row : localResult) { assert(row.size() == cols); for (int value : row) { assert(value >= 0 && value < n && nodes.insert(value).second); } }',
                'for (size_t i = 0; i < rows; ++i) for (size_t j = 0; j < cols; ++j) {',
                '    if (i + 1 < rows) observedEdges.insert(minmax(localResult[i][j], localResult[i+1][j]));',
                '    if (j + 1 < cols) observedEdges.insert(minmax(localResult[i][j], localResult[i][j+1]));',
                '}', 'assert(observedEdges == expectedEdges);']
    raise ValueError(f'Unsupported constructive predicate: {identifier}')
