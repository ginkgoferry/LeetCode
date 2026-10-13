/*
 * Problem: 2931. 购买物品的最大开销 / Maximum Spending After Buying Items
 * Link: https://leetcode.cn/problems/maximum-spending-after-buying-items/
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
    long long maxSpending(vector<vector<int>>& values) {
        // TODO: 在这里实现你的解法。
        (void)values;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> values = {{8, 5, 2}, {6, 4, 1}, {9, 7, 3}};
        auto localResult = solution.maxSpending(values);
        long long expected = 285LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> values = {{10, 8, 6, 4, 2}, {9, 7, 5, 3, 2}};
        auto localResult = solution.maxSpending(values);
        long long expected = 386LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
