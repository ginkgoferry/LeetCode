/*
 * Problem: 1542. 找出最长的超赞子字符串 / Find Longest Awesome Substring
 * Link: https://leetcode.cn/problems/find-longest-awesome-substring/
 * Chapter: 数据结构
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
    int longestAwesome(string s) {
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
        string s = "3242415";
        auto localResult = solution.longestAwesome(s);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "12345678";
        auto localResult = solution.longestAwesome(s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "213123";
        auto localResult = solution.longestAwesome(s);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "00";
        auto localResult = solution.longestAwesome(s);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
