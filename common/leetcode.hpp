#pragma once

#include <algorithm>
#include <cassert>
#include <cmath>
#include <optional>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

// Local simulations of LeetCode's platform callbacks. Configure these in main().
inline int localBadVersion = 1;
inline int localGuessTarget = 1;
inline bool isBadVersion(int version) { return version >= localBadVersion; }
inline int guess(int value) {
    return value == localGuessTarget ? 0 : (value > localGuessTarget ? -1 : 1);
}

class MountainArray {
    vector<int> values;
    int calls = 0;
public:
    explicit MountainArray(vector<int> data) : values(std::move(data)) {}
    int get(int index) {
        assert(index >= 0 && static_cast<size_t>(index) < values.size());
        assert(++calls <= 100);
        return values[index];
    }
    int length() const { return static_cast<int>(values.size()); }
};

inline bool approxEqual(double actual, double expected, double tolerance = 1e-5) {
    return abs(actual - expected) <= tolerance * max(1.0, abs(expected));
}
template <class T>
inline bool approxEqual(const vector<T>& actual, const vector<T>& expected, double tolerance = 1e-5) {
    if (actual.size() != expected.size()) return false;
    for (size_t i = 0; i < actual.size(); ++i)
        if (!approxEqual(actual[i], expected[i], tolerance)) return false;
    return true;
}

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *nextNode) : val(x), next(nextNode) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *leftNode, TreeNode *rightNode) : val(x), left(leftNode), right(rightNode) {}
};

inline void collectListNodes(ListNode* head, unordered_set<ListNode*>& owned) {
    unordered_set<ListNode*> visited;
    while (head && visited.insert(head).second) { owned.insert(head); head = head->next; }
}

inline void collectTreeNodes(TreeNode* root, unordered_set<TreeNode*>& owned) {
    unordered_set<TreeNode*> visited;
    vector<TreeNode*> pending{root};
    while (!pending.empty()) {
        TreeNode* node = pending.back(); pending.pop_back();
        if (!node || !visited.insert(node).second) continue;
        owned.insert(node); pending.push_back(node->left); pending.push_back(node->right);
    }
}

struct Node {
    int val;
    Node *next;
    Node *random;
    Node() : val(0), next(nullptr), random(nullptr) {}
    Node(int x) : val(x), next(nullptr), random(nullptr) {}
    Node(int x, Node *nextNode, Node *randomNode) : val(x), next(nextNode), random(randomNode) {}
};

inline ListNode *buildList(const vector<int> &values) {
    ListNode dummy;
    ListNode *tail = &dummy;
    for (int value : values) {
        tail->next = new ListNode(value);
        tail = tail->next;
    }
    return dummy.next;
}

inline vector<int> listToVector(ListNode *head) {
    vector<int> values;
    while (head != nullptr) {
        values.push_back(head->val);
        head = head->next;
    }
    return values;
}

inline void freeList(ListNode *head) {
    while (head != nullptr) {
        ListNode *next = head->next;
        delete head;
        head = next;
    }
}

inline vector<ListNode *> buildLists(const vector<vector<int>> &values) {
    vector<ListNode *> lists;
    for (const auto &listValues : values) {
        lists.push_back(buildList(listValues));
    }
    return lists;
}

inline ListNode *getNodeAt(ListNode *head, int index) {
    while (head != nullptr && index > 0) {
        head = head->next;
        --index;
    }
    return index == 0 ? head : nullptr;
}

inline ListNode *buildCycleList(const vector<int> &values, int pos) {
    ListNode *head = buildList(values);
    if (pos < 0) {
        return head;
    }

    ListNode *cycleNode = getNodeAt(head, pos);
    ListNode *tail = head;
    while (tail != nullptr && tail->next != nullptr) {
        tail = tail->next;
    }
    if (tail != nullptr) {
        tail->next = cycleNode;
    }
    return head;
}

inline void breakCycle(ListNode *head, int pos) {
    if (head == nullptr || pos < 0) {
        return;
    }

    ListNode *cycleNode = getNodeAt(head, pos);
    ListNode *cur = cycleNode;
    if (cur == nullptr) {
        return;
    }
    while (cur->next != nullptr && cur->next != cycleNode) {
        cur = cur->next;
    }
    if (cur->next == cycleNode) {
        cur->next = nullptr;
    }
}

inline pair<pair<ListNode *, ListNode *>, ListNode *> buildIntersectingLists(
    const vector<int> &listA,
    const vector<int> &listB,
    int skipA,
    int skipB
) {
    vector<int> commonValues;
    if (skipA < static_cast<int>(listA.size())) {
        commonValues.assign(listA.begin() + skipA, listA.end());
    }
    ListNode *common = buildList(commonValues);

    vector<int> prefixA(listA.begin(), listA.begin() + min(skipA, static_cast<int>(listA.size())));
    vector<int> prefixB(listB.begin(), listB.begin() + min(skipB, static_cast<int>(listB.size())));
    ListNode *headA = buildList(prefixA);
    ListNode *headB = buildList(prefixB);

    auto attach = [](ListNode *head, ListNode *suffix) {
        if (head == nullptr) {
            return suffix;
        }
        ListNode *tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
        }
        tail->next = suffix;
        return head;
    };

    return {{attach(headA, common), attach(headB, common)}, common};
}

inline TreeNode *buildTree(const vector<optional<int>> &values) {
    if (values.empty() || !values[0].has_value()) {
        return nullptr;
    }

    TreeNode *root = new TreeNode(values[0].value());
    queue<TreeNode *> nodes;
    nodes.push(root);
    size_t index = 1;
    while (!nodes.empty() && index < values.size()) {
        TreeNode *node = nodes.front();
        nodes.pop();

        if (index < values.size() && values[index].has_value()) {
            node->left = new TreeNode(values[index].value());
            nodes.push(node->left);
        }
        ++index;

        if (index < values.size() && values[index].has_value()) {
            node->right = new TreeNode(values[index].value());
            nodes.push(node->right);
        }
        ++index;
    }
    return root;
}

inline vector<optional<int>> treeToVector(TreeNode *root) {
    vector<optional<int>> values;
    queue<TreeNode *> nodes;
    nodes.push(root);
    while (!nodes.empty()) {
        TreeNode *node = nodes.front();
        nodes.pop();
        if (node == nullptr) {
            values.push_back(nullopt);
            continue;
        }
        values.push_back(node->val);
        nodes.push(node->left);
        nodes.push(node->right);
    }
    while (!values.empty() && !values.back().has_value()) {
        values.pop_back();
    }
    return values;
}

inline TreeNode *findTreeNode(TreeNode *root, int value) {
    if (root == nullptr || root->val == value) {
        return root;
    }
    if (TreeNode *left = findTreeNode(root->left, value)) {
        return left;
    }
    return findTreeNode(root->right, value);
}

inline void freeTree(TreeNode *root) {
    if (root == nullptr) {
        return;
    }
    freeTree(root->left);
    freeTree(root->right);
    delete root;
}

inline vector<int> treeInorder(TreeNode *root) {
    if (root == nullptr) {
        return {};
    }
    vector<int> values = treeInorder(root->left);
    values.push_back(root->val);
    vector<int> rightValues = treeInorder(root->right);
    values.insert(values.end(), rightValues.begin(), rightValues.end());
    return values;
}

inline int treeHeightOrUnbalanced(TreeNode *root) {
    if (root == nullptr) {
        return 0;
    }
    int left = treeHeightOrUnbalanced(root->left);
    int right = treeHeightOrUnbalanced(root->right);
    if (left < 0 || right < 0 || abs(left - right) > 1) {
        return -1;
    }
    return max(left, right) + 1;
}

inline bool isHeightBalanced(TreeNode *root) {
    return treeHeightOrUnbalanced(root) >= 0;
}

inline vector<int> flattenedTreeValues(TreeNode *root) {
    vector<int> values;
    while (root != nullptr) {
        if (root->left != nullptr) {
            return {};
        }
        values.push_back(root->val);
        root = root->right;
    }
    return values;
}

inline Node *buildRandomList(const vector<pair<int, optional<int>>> &values) {
    vector<Node *> nodes;
    for (const auto &[value, _] : values) {
        nodes.push_back(new Node(value));
    }
    for (size_t i = 0; i < nodes.size(); ++i) {
        if (i + 1 < nodes.size()) {
            nodes[i]->next = nodes[i + 1];
        }
        if (values[i].second.has_value()) {
            nodes[i]->random = nodes[values[i].second.value()];
        }
    }
    return nodes.empty() ? nullptr : nodes[0];
}

inline vector<pair<int, optional<int>>> randomListToVector(Node *head) {
    vector<Node *> nodes;
    unordered_map<Node *, int> indexByNode;
    for (Node *cur = head; cur != nullptr; cur = cur->next) {
        indexByNode[cur] = static_cast<int>(nodes.size());
        nodes.push_back(cur);
    }

    vector<pair<int, optional<int>>> values;
    for (Node *node : nodes) {
        optional<int> randomIndex;
        if (node->random != nullptr) {
            randomIndex = indexByNode[node->random];
        }
        values.push_back({node->val, randomIndex});
    }
    return values;
}

inline void freeRandomList(Node *head) {
    while (head != nullptr) {
        Node *next = head->next;
        delete head;
        head = next;
    }
}

template <class T>
inline vector<vector<T>> sortedOuter(vector<vector<T>> values) {
    sort(values.begin(), values.end());
    return values;
}

template <class T>
inline vector<vector<T>> sortedInnerAndOuter(vector<vector<T>> values) {
    for (auto &row : values) {
        sort(row.begin(), row.end());
    }
    sort(values.begin(), values.end());
    return values;
}
