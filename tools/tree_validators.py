"""LOCAL predicates for tree/list outputs with more than one valid answer."""
SUPPORTED = {'1382', '889', '701', '1171', '2212', '1044'}


def snapshots(identifier):
    if identifier in ('1382', '701'):
        return ['const auto localOriginalTree = treeToVector(root);']
    if identifier == '889':
        return ['const auto localOriginalPreorder = preorder;', 'const auto localOriginalPostorder = postorder;']
    if identifier == '1171':
        return ['const auto localOriginalValues = listToVector(head);']
    if identifier == '2212':
        return ['const auto localOriginalAlice = aliceArrows;']
    if identifier == '1044':
        return ['const auto localOriginalString = s;']
    return []


def statements(identifier, case):
    if identifier in ('1382', '701'):
        lines = ['vector<int> expectedValues;',
                 'for (const auto& value : localOriginalTree) if (value) expectedValues.push_back(*value);']
        if identifier == '701': lines.append('expectedValues.push_back(val);')
        lines += ['sort(expectedValues.begin(), expectedValues.end());',
                  'set<TreeNode*> seenNodes; vector<int> observedValues;',
                  'function<int(TreeNode*, long long, long long)> inspect = [&](TreeNode* current, long long low, long long high) {',
                  '    if (!current) return 0;',
                  '    assert(seenNodes.insert(current).second && current->val > low && current->val < high);',
                  '    int leftHeight = inspect(current->left, low, current->val);',
                  '    observedValues.push_back(current->val);',
                  '    int rightHeight = inspect(current->right, current->val, high);']
        if identifier == '1382': lines.append('    assert(abs(leftHeight - rightHeight) <= 1);')
        return lines + ['    return 1 + max(leftHeight, rightHeight);', '};',
                        'inspect(localResult, LLONG_MIN, LLONG_MAX);', 'assert(observedValues == expectedValues);']
    if identifier == '889':
        return ['set<TreeNode*> seenNodes; vector<int> observedPreorder, observedPostorder;',
                'function<void(TreeNode*)> inspect = [&](TreeNode* current) {',
                '    if (!current) return;', '    assert(seenNodes.insert(current).second);',
                '    observedPreorder.push_back(current->val);', '    inspect(current->left); inspect(current->right);',
                '    observedPostorder.push_back(current->val);', '};', 'inspect(localResult);',
                'assert(observedPreorder == localOriginalPreorder && observedPostorder == localOriginalPostorder);']
    if identifier == '1171':
        return '''
vector<int> observedValues; set<ListNode*> seenNodes;
for (ListNode* current = localResult; current; current = current->next) {
    assert(seenNodes.insert(current).second); observedValues.push_back(current->val);
}
assert(observedValues.size() <= localOriginalValues.size());
vector<long long> prefix(localOriginalValues.size() + 1);
for (size_t i = 0; i < localOriginalValues.size(); ++i) prefix[i+1] = prefix[i] + localOriginalValues[i];
vector<int> previous{-1};
for (int value : observedValues) {
    vector<int> next; set<long long> reachableSums; size_t index = 0;
    for (int i = 0; i < static_cast<int>(localOriginalValues.size()); ++i) {
        while (index < previous.size() && previous[index] < i) reachableSums.insert(prefix[previous[index++] + 1]);
        if (localOriginalValues[i] == value && reachableSums.count(prefix[i])) next.push_back(i);
    }
    assert(!next.empty()); previous = std::move(next);
}
bool validDeletions = false;
for (int position : previous) validDeletions |= prefix[position + 1] == prefix.back();
assert(validDeletions);
set<long long> partialSums{0}; long long total = 0;
for (int value : observedValues) { total += value; assert(partialSums.insert(total).second); }
'''.strip().splitlines()
    if identifier == '2212':
        optimum = sum(i for i, (bob, alice) in enumerate(zip(case['expected'], case['args'][1], strict=True)) if bob > alice)
        return ['assert(localResult.size() == localOriginalAlice.size());',
                'assert(accumulate(localResult.begin(), localResult.end(), 0LL) == numArrows);',
                'int score = 0;', 'for (size_t i = 0; i < localResult.size(); ++i) {',
                '    assert(localResult[i] >= 0);',
                '    if (localResult[i] > localOriginalAlice[i]) score += static_cast<int>(i);', '}',
                f'assert(score == {optimum});']
    if identifier == '1044':
        lines = [f"assert(localResult.size() == {len(case['expected'])});"]
        if not case['expected']: return lines
        return lines + ['size_t first = localOriginalString.find(localResult);',
                        'assert(first != string::npos && localOriginalString.find(localResult, first + 1) != string::npos);']
    raise ValueError(f'Unsupported tree predicate: {identifier}')
