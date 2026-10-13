"""LOCAL models for LeetCode Node interfaces that differ from random-list Node."""
NARY = {'589','590','559','429'}
NEXT_POINTERS = {'116','117'}
QUAD = {'427','558'}
SUPPORTED = {'LCR 29', '430'} | NARY | NEXT_POINTERS | QUAD
CYCLIC_NODE = '''
class Node {
public:
    int val; Node* next;
    Node() : val(0), next(nullptr) {}
    explicit Node(int value) : val(value), next(nullptr) {}
    Node(int value, Node* following) : val(value), next(following) {}
};
'''
NARY_NODE = '''
class Node {
public:
    int val; vector<Node*> children;
    Node() : val(0) {}
    explicit Node(int value) : val(value) {}
    Node(int value, vector<Node*> descendants) : val(value), children(std::move(descendants)) {}
};
inline Node* localBuildNary(const vector<optional<int>>& data, unordered_set<Node*>& owned) {
    if (data.empty() || !data[0]) return nullptr;
    auto create = [&](int value) { Node* node = new Node(value); owned.insert(node); return node; };
    Node* root = create(*data[0]); queue<Node*> pending; pending.push(root); size_t position = 1;
    if (position < data.size()) { assert(!data[position]); ++position; }
    while (position < data.size()) {
        assert(!pending.empty()); Node* parent = pending.front(); pending.pop();
        while (position < data.size() && data[position]) {
            Node* child = create(*data[position++]); parent->children.push_back(child); pending.push(child);
        }
        if (position < data.size()) ++position;
    }
    return root;
}
'''
NEXT_NODE = '''
class Node {
public:
    int val; Node *left, *right, *next;
    Node() : val(0), left(nullptr), right(nullptr), next(nullptr) {}
    explicit Node(int value) : val(value), left(nullptr), right(nullptr), next(nullptr) {}
    Node(int value, Node* lhs, Node* rhs, Node* following) : val(value), left(lhs), right(rhs), next(following) {}
};
inline Node* localBuildNextTree(const vector<optional<int>>& data, unordered_set<Node*>& owned) {
    TreeNode* temporary = buildTree(data); unordered_set<TreeNode*> originals; collectTreeNodes(temporary, originals);
    function<Node*(TreeNode*)> copy = [&](TreeNode* current) -> Node* {
        if (!current) return nullptr;
        Node* node = new Node(current->val); owned.insert(node);
        node->left = copy(current->left); node->right = copy(current->right); return node;
    };
    Node* root = copy(temporary); for (TreeNode* node : originals) delete node; return root;
}
'''
MULTILEVEL_NODE = '''
class Node {
public:
    int val; Node *prev, *next, *child;
    Node() : val(0), prev(nullptr), next(nullptr), child(nullptr) {}
    explicit Node(int value) : val(value), prev(nullptr), next(nullptr), child(nullptr) {}
    Node(int value, Node* before, Node* after, Node* below) : val(value), prev(before), next(after), child(below) {}
};
inline Node* localBuildMultilevel(const vector<optional<int>>& data, unordered_set<Node*>& owned) {
    size_t position = 0;
    auto chain = [&]() {
        vector<Node*> nodes;
        while (position < data.size() && data[position]) {
            Node* node = new Node(*data[position++]); owned.insert(node);
            if (!nodes.empty()) { node->prev = nodes.back(); nodes.back()->next = node; }
            nodes.push_back(node);
        }
        return nodes;
    };
    auto level = chain(); Node* head = level.empty() ? nullptr : level[0];
    while (position < data.size()) {
        assert(!data[position++]); size_t offset = 0;
        while (position < data.size() && !data[position]) { ++offset; ++position; }
        if (position == data.size()) break;
        assert(offset < level.size()); Node* parent = level[offset];
        level = chain(); assert(!level.empty()); parent->child = level[0];
    }
    return head;
}
'''
QUAD_NODE = '''
#include <array>
class Node {
public:
    bool val, isLeaf; Node *topLeft, *topRight, *bottomLeft, *bottomRight;
    Node() : Node(false, false) {}
    Node(bool value, bool leaf) : val(value), isLeaf(leaf), topLeft(nullptr), topRight(nullptr), bottomLeft(nullptr), bottomRight(nullptr) {}
    Node(bool value, bool leaf, Node* tl, Node* tr, Node* bl, Node* br)
        : val(value), isLeaf(leaf), topLeft(tl), topRight(tr), bottomLeft(bl), bottomRight(br) {}
};
inline Node* localBuildQuad(const vector<optional<array<int,2>>>& data, unordered_set<Node*>& owned) {
    if (data.empty() || !data[0]) return nullptr;
    auto create = [&](const array<int,2>& value) { Node* node = new Node(value[1], value[0]); owned.insert(node); return node; };
    Node* root = create(*data[0]); queue<Node*> pending; pending.push(root); size_t position = 1;
    while (position < data.size()) {
        assert(!pending.empty()); Node* parent = pending.front(); pending.pop();
        Node** children[] = {&parent->topLeft, &parent->topRight, &parent->bottomLeft, &parent->bottomRight};
        for (Node** child : children) {
            if (position == data.size()) break;
            if (data[position]) { assert(!parent->isLeaf); *child = create(*data[position]); pending.push(*child); }
            ++position;
        }
    }
    return root;
}
inline int localQuadDepth(Node* node) {
    assert(node); if (node->isLeaf) return 0;
    return 1 + max({localQuadDepth(node->topLeft), localQuadDepth(node->topRight), localQuadDepth(node->bottomLeft), localQuadDepth(node->bottomRight)});
}
inline vector<vector<int>> localQuadGrid(Node* root, int side, unordered_set<Node*>& owned) {
    vector<vector<int>> grid(side, vector<int>(side));
    function<void(Node*,int,int,int)> fill = [&](Node* node, int row, int col, int length) {
        assert(node); owned.insert(node);
        if (node->isLeaf) {
            assert(!node->topLeft && !node->topRight && !node->bottomLeft && !node->bottomRight);
            for (int i = row; i < row + length; ++i) for (int j = col; j < col + length; ++j) grid[i][j] = node->val;
        } else {
            assert(length > 1); int half = length / 2;
            fill(node->topLeft, row, col, half); fill(node->topRight, row, col + half, half);
            fill(node->bottomLeft, row + half, col, half); fill(node->bottomRight, row + half, col + half, half);
            bool uniform = true;
            for (int i = row; i < row + length; ++i) for (int j = col; j < col + length; ++j) uniform &= grid[i][j] == grid[row][col];
            assert(!uniform);
        }
    };
    fill(root, 0, 0, side); return grid;
}
'''


def prelude(identifier):
    if identifier == 'LCR 29': return CYCLIC_NODE
    if identifier in NARY: return NARY_NODE
    if identifier in NEXT_POINTERS: return NEXT_NODE
    if identifier == '430': return MULTILEVEL_NODE
    if identifier in QUAD: return QUAD_NODE
    raise ValueError(identifier)


def render_case(identifier, spec, case):
    from tools.prepare_environments import literal, cpp_type
    if identifier == '430':
        values = ', '.join('nullopt' if value is None else str(value) for value in (case['args'][0] or []))
        return '\n'.join(['    {', '        // 官方样例：多级双向链表。', '        unordered_set<Node*> owned;',
            f'        Node* head = localBuildMultilevel(vector<optional<int>>{{{values}}}, owned);',
            '        auto localResult = solution.flatten(head); vector<int> observed; unordered_set<Node*> seen;',
            '        Node* previous = nullptr;', '        for (Node* current = localResult; current; current = current->next) {',
            '            assert(seen.insert(current).second && current->prev == previous && !current->child);',
            '            observed.push_back(current->val); previous = current;', '        }',
            f"        vector<int> expected = {literal(case['expected'], 'integer[]')};", '        assert(observed == expected);',
            '        owned.insert(seen.begin(), seen.end()); for (Node* allocated : owned) delete allocated;', '    }'])
    if identifier in QUAD:
        lines = ['    {', '        // 官方样例：检查四叉树表示的区域及叶子合并规则。', '        unordered_set<Node*> owned;']
        if identifier == '427':
            lines += [f"        vector<vector<int>> grid = {literal(case['args'][0], 'integer[][]')};",
                      '        const auto expected = grid;', '        auto localResult = solution.construct(grid);',
                      '        assert(localQuadGrid(localResult, static_cast<int>(expected.size()), owned) == expected);']
        else:
            for name, values in zip(('quadTree1', 'quadTree2'), case['args'], strict=True):
                encoded = ', '.join('nullopt' if value is None else 'array<int,2>' + literal(value, 'integer[]') for value in values)
                lines.append(f'        Node* {name} = localBuildQuad(vector<optional<array<int,2>>>{{{encoded}}}, owned);')
            lines += ['        int side = 1 << max(localQuadDepth(quadTree1), localQuadDepth(quadTree2));',
                      '        const auto first = localQuadGrid(quadTree1, side, owned);',
                      '        const auto second = localQuadGrid(quadTree2, side, owned);',
                      '        auto localResult = solution.intersect(quadTree1, quadTree2);',
                      '        const auto observed = localQuadGrid(localResult, side, owned);',
                      '        for (int i = 0; i < side; ++i) for (int j = 0; j < side; ++j) assert(observed[i][j] == (first[i][j] || second[i][j]));']
        return '\n'.join(lines + ['        for (Node* allocated : owned) delete allocated;', '    }'])
    if identifier in NARY | NEXT_POINTERS:
        values = ', '.join('nullopt' if value is None else str(value) for value in (case['args'][0] or []))
        builder = 'localBuildNary' if identifier in NARY else 'localBuildNextTree'
        lines = ['    {', '        // 官方样例：专用 Node 接口。', '        unordered_set<Node*> owned;',
                 f'        Node* root = {builder}(vector<optional<int>>{{{values}}}, owned);']
        if identifier in NEXT_POINTERS:
            lines += ['        vector<vector<Node*>> levels; vector<int> originalValues; vector<pair<Node*,Node*>> originalChildren;',
                      '        vector<Node*> order; if (root) order.push_back(root);',
                      '        while (!order.empty()) {', '            levels.push_back(order); vector<Node*> nextLevel;',
                      '            for (Node* current : order) {',
                      '                originalValues.push_back(current->val); originalChildren.push_back({current->left, current->right});',
                      '                if (current->left) nextLevel.push_back(current->left); if (current->right) nextLevel.push_back(current->right);',
                      '            }', '            order = std::move(nextLevel);', '        }',
                      '        auto localResult = solution.connect(root); assert(localResult == root);',
                      '        size_t position = 0;', '        for (const auto& level : levels) for (size_t i = 0; i < level.size(); ++i) {',
                      '            Node* current = level[i];',
                      '            assert(current->val == originalValues[position] && current->left == originalChildren[position].first && current->right == originalChildren[position].second);',
                      '            assert(current->next == (i + 1 < level.size() ? level[i+1] : nullptr)); ++position;', '        }']
        else:
            kind = spec['metadata']['return']['type']
            lines += [f"        auto localResult = solution.{spec['metadata']['name']}(root);",
                      f"        {cpp_type(kind)} expected = {literal(case['expected'], kind)};",
                      '        assert(localResult == expected);']
        return '\n'.join(lines + ['        for (Node* allocated : owned) delete allocated;', '    }'])
    if identifier != 'LCR 29': raise ValueError(identifier)
    values, value = case['args']
    return '\n'.join([
        '    {', '        // 官方样例：循环链表必须保留原始头节点。',
        f"        vector<int> input = {literal(values or [], 'integer[]')};",
        f'        int insertVal = {value};',
        '        unordered_set<Node*> owned;', '        Node* head = nullptr; Node* tail = nullptr;',
        '        for (int element : input) {',
        '            Node* fresh = new Node(element); owned.insert(fresh);',
        '            if (!head) head = fresh; else tail->next = fresh; tail = fresh;', '        }',
        '        if (tail) tail->next = head;', '        auto localResult = solution.insert(head, insertVal);',
        '        assert(localResult); if (head) assert(localResult == head);',
        '        vector<int> observed; unordered_set<Node*> seen; int descents = 0;',
        '        Node* current = localResult;', '        do {',
        '            assert(current && current->next && seen.insert(current).second);',
        '            observed.push_back(current->val); descents += current->val > current->next->val;',
        '            current = current->next;', '        } while (current != localResult);',
        '        assert(descents <= 1); auto expected = input; expected.push_back(insertVal);',
        '        sort(expected.begin(), expected.end()); sort(observed.begin(), observed.end());',
        '        assert(observed == expected);', '        owned.insert(seen.begin(), seen.end());',
        '        for (Node* allocated : owned) delete allocated;', '    }'])
