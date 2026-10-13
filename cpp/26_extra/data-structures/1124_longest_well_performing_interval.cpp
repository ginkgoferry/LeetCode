/*
 * Problem: 1124. 表现良好的最长时间段 / Longest Well-Performing Interval
 * Link: https://leetcode.cn/problems/longest-well-performing-interval/
 * Chapter: 栈
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
    int longestWPI(vector<int>& hours) {
        // TODO: 在这里实现你的解法。
        (void)hours;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> hours = {9, 9, 6, 0, 6, 6, 9};
        auto localResult = solution.longestWPI(hours);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> hours = {6, 6, 6};
        auto localResult = solution.longestWPI(hours);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
