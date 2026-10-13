/*
 * Problem: 1104. 二叉树寻路 / Path In Zigzag Labelled Binary Tree
 * Link: https://leetcode.cn/problems/path-in-zigzag-labelled-binary-tree/
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
#include "common/leetcode.hpp"
#endif

class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        // TODO: 在这里实现你的解法。
        (void)label;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int label = 14;
        auto localResult = solution.pathInZigZagTree(label);
        vector<int> expected = {1, 3, 4, 14};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int label = 26;
        auto localResult = solution.pathInZigZagTree(label);
        vector<int> expected = {1, 2, 6, 10, 26};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
