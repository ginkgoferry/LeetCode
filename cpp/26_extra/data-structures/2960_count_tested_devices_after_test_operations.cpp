/*
 * Problem: 2960. 统计已测试设备 / Count Tested Devices After Test Operations
 * Link: https://leetcode.cn/problems/count-tested-devices-after-test-operations/
 * Chapter: 数据结构
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
    int countTestedDevices(vector<int>& batteryPercentages) {
        // TODO: 在这里实现你的解法。
        (void)batteryPercentages;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> batteryPercentages = {1, 1, 2, 1, 3};
        auto localResult = solution.countTestedDevices(batteryPercentages);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> batteryPercentages = {0, 1, 2};
        auto localResult = solution.countTestedDevices(batteryPercentages);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
