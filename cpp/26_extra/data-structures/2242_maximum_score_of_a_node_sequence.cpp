/*
 * Problem: 2242. 节点序列的最大得分 / Maximum Score of a Node Sequence
 * Link: https://leetcode.cn/problems/maximum-score-of-a-node-sequence/
 * Chapter: 图论
 * Difficulty: Hard
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
    int maximumScore(vector<int>& scores, vector<vector<int>>& edges) {
        // TODO: 在这里实现你的解法。
        (void)scores;
        (void)edges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> scores = {5, 2, 9, 8, 4};
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3}, {0, 2}, {1, 3}, {2, 4}};
        auto localResult = solution.maximumScore(scores, edges);
        int expected = 24;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> scores = {9, 20, 6, 4, 11, 12};
        vector<vector<int>> edges = {{0, 3}, {5, 3}, {2, 4}, {1, 3}};
        auto localResult = solution.maximumScore(scores, edges);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
