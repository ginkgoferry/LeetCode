/*
 * Problem: 3116. 单面值组合的第 K 小金额 / Kth Smallest Amount With Single Denomination Combination
 * Link: https://leetcode.cn/problems/kth-smallest-amount-with-single-denomination-combination/
 * Chapter: 二分查找
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
    long long findKthSmallest(vector<int>& coins, int k) {
        // TODO: 在这里实现你的解法。
        (void)coins;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> coins = {3, 6, 9};
        int k = 3;
        auto localResult = solution.findKthSmallest(coins, k);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> coins = {5, 2};
        int k = 7;
        auto localResult = solution.findKthSmallest(coins, k);
        long long expected = 12LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
