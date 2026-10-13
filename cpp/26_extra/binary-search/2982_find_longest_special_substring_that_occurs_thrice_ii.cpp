/*
 * Problem: 2982. 找出出现至少三次的最长特殊子字符串 II / Find Longest Special Substring That Occurs Thrice II
 * Link: https://leetcode.cn/problems/find-longest-special-substring-that-occurs-thrice-ii/
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
    int maximumLength(string s) {
        // TODO: 在这里实现你的解法。
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "aaaa";
        auto localResult = solution.maximumLength(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcdef";
        auto localResult = solution.maximumLength(s);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcaba";
        auto localResult = solution.maximumLength(s);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
