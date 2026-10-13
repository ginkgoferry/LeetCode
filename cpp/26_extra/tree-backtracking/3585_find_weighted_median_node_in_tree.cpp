/*
 * Problem: 3585. 树中找到带权中位节点 / Find Weighted Median Node in Tree
 * Link: https://leetcode.cn/problems/find-weighted-median-node-in-tree/
 * Chapter: 树与回溯
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
    vector<int> findMedian(int n, vector<vector<int>>& edges, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        vector<vector<int>> edges = {{0, 1, 7}};
        vector<vector<int>> queries = {{1, 0}, {0, 1}};
        auto localResult = solution.findMedian(n, edges, queries);
        vector<int> expected = {0, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1, 2}, {2, 0, 4}};
        vector<vector<int>> queries = {{0, 1}, {2, 0}, {1, 2}};
        auto localResult = solution.findMedian(n, edges, queries);
        vector<int> expected = {1, 0, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> edges = {{0, 1, 2}, {0, 2, 5}, {1, 3, 1}, {2, 4, 3}};
        vector<vector<int>> queries = {{3, 4}, {1, 2}};
        auto localResult = solution.findMedian(n, edges, queries);
        vector<int> expected = {2, 2};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
