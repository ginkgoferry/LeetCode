/*
 * Problem: 4026. 工位的最大间隔 / Maximum Gap Between Stations
 * Link: https://leetcode.cn/problems/maximum-gap-between-stations/
 * Chapter: 双指针
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
    int maximumGap(string skill, string station) {
        // TODO: 在这里实现你的解法。
        (void)skill;
        (void)station;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string skill = "aa";
        string station = "aaaa";
        auto localResult = solution.maximumGap(skill, station);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string skill = "xyz";
        string station = "xyzz";
        auto localResult = solution.maximumGap(skill, station);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string skill = "cbc";
        string station = "cbcdbc";
        auto localResult = solution.maximumGap(skill, station);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
