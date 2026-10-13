/*
 * Problem: 1782. 统计点对的数目 / Count Pairs Of Nodes
 * Link: https://leetcode.cn/problems/count-pairs-of-nodes/
 * Chapter: 双指针
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
    vector<int> countPairs(int n, vector<vector<int>>& edges, vector<int>& queries) {
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
        int n = 4;
        vector<vector<int>> edges = {{1, 2}, {2, 4}, {1, 3}, {2, 3}, {2, 1}};
        vector<int> queries = {2, 3};
        auto localResult = solution.countPairs(n, edges, queries);
        vector<int> expected = {6, 5};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> edges = {{1, 5}, {1, 5}, {3, 4}, {2, 5}, {1, 3}, {5, 1}, {2, 3}, {2, 5}};
        vector<int> queries = {1, 2, 3, 4, 5};
        auto localResult = solution.countPairs(n, edges, queries);
        vector<int> expected = {10, 10, 9, 8, 6};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
