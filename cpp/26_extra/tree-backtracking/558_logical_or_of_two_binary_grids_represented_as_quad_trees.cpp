/*
 * Problem: 558. 四叉树交集 / Logical OR of Two Binary Grids Represented as Quad-Trees
 * Link: https://leetcode.cn/problems/logical-or-of-two-binary-grids-represented-as-quad-trees/
 * Chapter: 树与回溯
 * Difficulty: Medium
 *
 * Idea:
 * - 
 *
 * Complexity:
 * - Time:
 * - Space:
 *
 * Pitfalls:
 * - 
 *
 * Review:
 * - First pass:
 * - Last attempt:
 * - Last review:
 * - Next review:
 * - Confidence:
 * - Sessions: 0
 * - Status: TODO
 */

#include <algorithm>
#include <cassert>
#include <cmath>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

#ifdef LOCAL
#define Node LocalRandomListNode
#include "common/leetcode.hpp"
#undef Node

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

#endif

class Solution {
public:
    Node* intersect(Node* quadTree1, Node* quadTree2) {
        // TODO: 在这里实现你的解法。
        (void)quadTree1;
        (void)quadTree2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例：检查四叉树表示的区域及叶子合并规则。
        unordered_set<Node*> owned;
        Node* quadTree1 = localBuildQuad(vector<optional<array<int,2>>>{array<int,2>{0, 1}, array<int,2>{1, 1}, array<int,2>{1, 1}, array<int,2>{1, 0}, array<int,2>{1, 0}}, owned);
        Node* quadTree2 = localBuildQuad(vector<optional<array<int,2>>>{array<int,2>{0, 1}, array<int,2>{1, 1}, array<int,2>{0, 1}, array<int,2>{1, 1}, array<int,2>{1, 0}, nullopt, nullopt, nullopt, nullopt, array<int,2>{1, 0}, array<int,2>{1, 0}, array<int,2>{1, 1}, array<int,2>{1, 1}}, owned);
        int side = 1 << max(localQuadDepth(quadTree1), localQuadDepth(quadTree2));
        const auto first = localQuadGrid(quadTree1, side, owned);
        const auto second = localQuadGrid(quadTree2, side, owned);
        auto localResult = solution.intersect(quadTree1, quadTree2);
        const auto observed = localQuadGrid(localResult, side, owned);
        for (int i = 0; i < side; ++i) for (int j = 0; j < side; ++j) assert(observed[i][j] == (first[i][j] || second[i][j]));
        for (Node* allocated : owned) delete allocated;
    }

    {
        // 官方样例：检查四叉树表示的区域及叶子合并规则。
        unordered_set<Node*> owned;
        Node* quadTree1 = localBuildQuad(vector<optional<array<int,2>>>{array<int,2>{1, 0}}, owned);
        Node* quadTree2 = localBuildQuad(vector<optional<array<int,2>>>{array<int,2>{1, 0}}, owned);
        int side = 1 << max(localQuadDepth(quadTree1), localQuadDepth(quadTree2));
        const auto first = localQuadGrid(quadTree1, side, owned);
        const auto second = localQuadGrid(quadTree2, side, owned);
        auto localResult = solution.intersect(quadTree1, quadTree2);
        const auto observed = localQuadGrid(localResult, side, owned);
        for (int i = 0; i < side; ++i) for (int j = 0; j < side; ++j) assert(observed[i][j] == (first[i][j] || second[i][j]));
        for (Node* allocated : owned) delete allocated;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
