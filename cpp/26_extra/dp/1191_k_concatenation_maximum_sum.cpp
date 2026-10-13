/*
 * Problem: 1191. K 次串联后最大子数组之和 / K-Concatenation Maximum Sum
 * Link: https://leetcode.cn/problems/k-concatenation-maximum-sum/
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
    int kConcatenationMaxSum(vector<int>& arr, int k) {
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
        vector<int> arr = {1, 2};
        int k = 3;
        auto localResult = solution.kConcatenationMaxSum(arr, k);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, -2, 1};
        int k = 5;
        auto localResult = solution.kConcatenationMaxSum(arr, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {-1, -2};
        int k = 7;
        auto localResult = solution.kConcatenationMaxSum(arr, k);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
