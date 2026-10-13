/*
 * Problem: 3639. 变为活跃状态的最小时间 / Minimum Time to Activate String
 * Link: https://leetcode.cn/problems/minimum-time-to-activate-string/
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
    int minTime(string s, vector<int>& order, int k) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)order;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abc";
        vector<int> order = {1, 0, 2};
        int k = 2;
        auto localResult = solution.minTime(s, order, k);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "cat";
        vector<int> order = {0, 2, 1};
        int k = 6;
        auto localResult = solution.minTime(s, order, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "xy";
        vector<int> order = {0, 1};
        int k = 4;
        auto localResult = solution.minTime(s, order, k);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
