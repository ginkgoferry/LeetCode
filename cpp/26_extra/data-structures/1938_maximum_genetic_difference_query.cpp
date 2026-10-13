/*
 * Problem: 1938. 查询最大基因差 / Maximum Genetic Difference Query
 * Link: https://leetcode.cn/problems/maximum-genetic-difference-query/
 * Chapter: 数据结构
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
    vector<int> maxGeneticDifference(vector<int>& parents, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)parents;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> parents = {-1, 0, 1, 1};
        vector<vector<int>> queries = {{0, 2}, {3, 2}, {2, 5}};
        auto localResult = solution.maxGeneticDifference(parents, queries);
        vector<int> expected = {2, 3, 7};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> parents = {3, 7, -1, 2, 0, 7, 0, 2};
        vector<vector<int>> queries = {{4, 6}, {1, 15}, {0, 5}};
        auto localResult = solution.maxGeneticDifference(parents, queries);
        vector<int> expected = {6, 14, 7};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
