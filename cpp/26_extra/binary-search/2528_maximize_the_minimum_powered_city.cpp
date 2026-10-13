/*
 * Problem: 2528. 最大化城市的最小电量 / Maximize the Minimum Powered City
 * Link: https://leetcode.cn/problems/maximize-the-minimum-powered-city/
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
    long long maxPower(vector<int>& stations, int r, int k) {
        // TODO: 在这里实现你的解法。
        (void)stations;
        (void)r;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> stations = {1, 2, 4, 5, 0};
        int r = 1;
        int k = 2;
        auto localResult = solution.maxPower(stations, r, k);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> stations = {4, 4, 4, 4};
        int r = 0;
        int k = 3;
        auto localResult = solution.maxPower(stations, r, k);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
