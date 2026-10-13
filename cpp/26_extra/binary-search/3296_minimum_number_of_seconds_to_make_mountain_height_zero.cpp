/*
 * Problem: 3296. 移山所需的最少秒数 / Minimum Number of Seconds to Make Mountain Height Zero
 * Link: https://leetcode.cn/problems/minimum-number-of-seconds-to-make-mountain-height-zero/
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
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        // TODO: 在这里实现你的解法。
        (void)mountainHeight;
        (void)workerTimes;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int mountainHeight = 4;
        vector<int> workerTimes = {2, 1, 1};
        auto localResult = solution.minNumberOfSeconds(mountainHeight, workerTimes);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int mountainHeight = 10;
        vector<int> workerTimes = {3, 2, 2, 4};
        auto localResult = solution.minNumberOfSeconds(mountainHeight, workerTimes);
        long long expected = 12LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int mountainHeight = 5;
        vector<int> workerTimes = {1};
        auto localResult = solution.minNumberOfSeconds(mountainHeight, workerTimes);
        long long expected = 15LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
