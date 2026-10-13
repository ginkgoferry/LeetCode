/*
 * Problem: 3645. 最优激活顺序得到的最大总和 / Maximum Total from Optimal Activation Order
 * Link: https://leetcode.cn/problems/maximum-total-from-optimal-activation-order/
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
    long long maxTotal(vector<int>& value, vector<int>& limit) {
        // TODO: 在这里实现你的解法。
        (void)value;
        (void)limit;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> value = {3, 5, 8};
        vector<int> limit = {2, 1, 3};
        auto localResult = solution.maxTotal(value, limit);
        long long expected = 16LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> value = {4, 2, 6};
        vector<int> limit = {1, 1, 1};
        auto localResult = solution.maxTotal(value, limit);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> value = {4, 1, 5, 2};
        vector<int> limit = {3, 3, 2, 3};
        auto localResult = solution.maxTotal(value, limit);
        long long expected = 12LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
