/*
 * Problem: 2745. 构造最长的新字符串 / Construct the Longest New String
 * Link: https://leetcode.cn/problems/construct-the-longest-new-string/
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
    int longestString(int x, int y, int z) {
        // TODO: 在这里实现你的解法。
        (void)x;
        (void)y;
        (void)z;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int x = 2;
        int y = 5;
        int z = 1;
        auto localResult = solution.longestString(x, y, z);
        int expected = 12;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int x = 3;
        int y = 2;
        int z = 2;
        auto localResult = solution.longestString(x, y, z);
        int expected = 14;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
