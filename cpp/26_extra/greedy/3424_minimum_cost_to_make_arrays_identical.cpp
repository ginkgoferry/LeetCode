/*
 * Problem: 3424. 将数组变相同的最小代价 / Minimum Cost to Make Arrays Identical
 * Link: https://leetcode.cn/problems/minimum-cost-to-make-arrays-identical/
 * Chapter: 贪心算法
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
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        (void)brr;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {-7, 9, 5};
        vector<int> brr = {7, -2, -5};
        long long k = 2LL;
        auto localResult = solution.minCost(arr, brr, k);
        long long expected = 13LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {2, 1};
        vector<int> brr = {2, 1};
        long long k = 0LL;
        auto localResult = solution.minCost(arr, brr, k);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
