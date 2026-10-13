/*
 * Problem: 2055. 蜡烛之间的盘子 / Plates Between Candles
 * Link: https://leetcode.cn/problems/plates-between-candles/
 * Chapter: 数据结构
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
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "**|**|***|";
        vector<vector<int>> queries = {{2, 5}, {5, 9}};
        auto localResult = solution.platesBetweenCandles(s, queries);
        vector<int> expected = {2, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "***|**|*****|**||**|*";
        vector<vector<int>> queries = {{1, 17}, {4, 5}, {14, 17}, {5, 11}, {15, 16}};
        auto localResult = solution.platesBetweenCandles(s, queries);
        vector<int> expected = {9, 0, 0, 0, 0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
