/*
 * Problem: 1710. 卡车上的最大单元数 / Maximum Units on a Truck
 * Link: https://leetcode.cn/problems/maximum-units-on-a-truck/
 * Chapter: 贪心算法
 * Difficulty: Easy
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
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // TODO: 在这里实现你的解法。
        (void)boxTypes;
        (void)truckSize;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> boxTypes = {{1, 3}, {2, 2}, {3, 1}};
        int truckSize = 4;
        auto localResult = solution.maximumUnits(boxTypes, truckSize);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> boxTypes = {{5, 10}, {2, 5}, {4, 7}, {3, 9}};
        int truckSize = 10;
        auto localResult = solution.maximumUnits(boxTypes, truckSize);
        int expected = 91;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
