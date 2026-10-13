/*
 * Problem: 3638. 平衡装运的最大数量 / Maximum Balanced Shipments
 * Link: https://leetcode.cn/problems/maximum-balanced-shipments/
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
    int maxBalancedShipments(vector<int>& weight) {
        // TODO: 在这里实现你的解法。
        (void)weight;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> weight = {2, 5, 1, 4, 3};
        auto localResult = solution.maxBalancedShipments(weight);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> weight = {4, 4};
        auto localResult = solution.maxBalancedShipments(weight);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
