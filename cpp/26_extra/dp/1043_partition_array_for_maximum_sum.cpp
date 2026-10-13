/*
 * Problem: 1043. 分隔数组以得到最大和 / Partition Array for Maximum Sum
 * Link: https://leetcode.cn/problems/partition-array-for-maximum-sum/
 * Chapter: 动态规划
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
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {1, 15, 7, 9, 2, 5, 10};
        int k = 3;
        auto localResult = solution.maxSumAfterPartitioning(arr, k);
        int expected = 84;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 4, 1, 5, 7, 3, 6, 1, 9, 9, 3};
        int k = 4;
        auto localResult = solution.maxSumAfterPartitioning(arr, k);
        int expected = 83;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1};
        int k = 1;
        auto localResult = solution.maxSumAfterPartitioning(arr, k);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
