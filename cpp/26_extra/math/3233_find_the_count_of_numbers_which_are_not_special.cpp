/*
 * Problem: 3233. 统计不是特殊数字的数字数量 / Find the Count of Numbers Which Are Not Special
 * Link: https://leetcode.cn/problems/find-the-count-of-numbers-which-are-not-special/
 * Chapter: 数学
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
    int nonSpecialCount(int l, int r) {
        // TODO: 在这里实现你的解法。
        (void)l;
        (void)r;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int l = 5;
        int r = 7;
        auto localResult = solution.nonSpecialCount(l, r);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int l = 4;
        int r = 16;
        auto localResult = solution.nonSpecialCount(l, r);
        int expected = 11;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
