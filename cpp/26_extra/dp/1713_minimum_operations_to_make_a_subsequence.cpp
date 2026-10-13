/*
 * Problem: 1713. 得到子序列的最少操作次数 / Minimum Operations to Make a Subsequence
 * Link: https://leetcode.cn/problems/minimum-operations-to-make-a-subsequence/
 * Chapter: 动态规划
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
    int minOperations(vector<int>& target, vector<int>& arr) {
        // TODO: 在这里实现你的解法。
        (void)target;
        (void)arr;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> target = {5, 1, 3};
        vector<int> arr = {9, 4, 2, 3, 4};
        auto localResult = solution.minOperations(target, arr);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> target = {6, 4, 8, 1, 3, 2};
        vector<int> arr = {4, 7, 6, 2, 3, 8, 6, 1};
        auto localResult = solution.minOperations(target, arr);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
