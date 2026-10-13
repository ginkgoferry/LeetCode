/*
 * Problem: 2607. 使子数组元素和相等 / Make K-Subarray Sums Equal
 * Link: https://leetcode.cn/problems/make-k-subarray-sums-equal/
 * Chapter: 数学
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
    long long makeSubKSumEqual(vector<int>& arr, int k) {
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
        vector<int> arr = {1, 4, 1, 3};
        int k = 2;
        auto localResult = solution.makeSubKSumEqual(arr, k);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {2, 5, 5, 7};
        int k = 3;
        auto localResult = solution.makeSubKSumEqual(arr, k);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
