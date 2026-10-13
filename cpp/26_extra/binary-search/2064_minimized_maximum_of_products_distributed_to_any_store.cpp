/*
 * Problem: 2064. 分配给商店的最多商品的最小值 / Minimized Maximum of Products Distributed to Any Store
 * Link: https://leetcode.cn/problems/minimized-maximum-of-products-distributed-to-any-store/
 * Chapter: 二分查找
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
    int minimizedMaximum(int n, vector<int>& quantities) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)quantities;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 6;
        vector<int> quantities = {11, 6};
        auto localResult = solution.minimizedMaximum(n, quantities);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 7;
        vector<int> quantities = {15, 10, 10};
        auto localResult = solution.minimizedMaximum(n, quantities);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 1;
        vector<int> quantities = {100000};
        auto localResult = solution.minimizedMaximum(n, quantities);
        int expected = 100000;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
