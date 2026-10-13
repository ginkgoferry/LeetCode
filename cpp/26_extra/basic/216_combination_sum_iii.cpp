/*
 * Problem: 216. 组合总和 III / Combination Sum III
 * Link: https://leetcode.cn/problems/combination-sum-iii/
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
    vector<vector<int>> combinationSum3(int k, int n) {
        // TODO: 在这里实现你的解法。
        (void)k;
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int k = 3;
        int n = 7;
        auto localResult = solution.combinationSum3(k, n);
        vector<vector<int>> expected = {{1, 2, 4}};
        for (auto& row : localResult) sort(row.begin(), row.end());
        for (auto& row : expected) sort(row.begin(), row.end());
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 3;
        int n = 9;
        auto localResult = solution.combinationSum3(k, n);
        vector<vector<int>> expected = {{1, 2, 6}, {1, 3, 5}, {2, 3, 4}};
        for (auto& row : localResult) sort(row.begin(), row.end());
        for (auto& row : expected) sort(row.begin(), row.end());
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 4;
        int n = 1;
        auto localResult = solution.combinationSum3(k, n);
        vector<vector<int>> expected = {};
        for (auto& row : localResult) sort(row.begin(), row.end());
        for (auto& row : expected) sort(row.begin(), row.end());
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
