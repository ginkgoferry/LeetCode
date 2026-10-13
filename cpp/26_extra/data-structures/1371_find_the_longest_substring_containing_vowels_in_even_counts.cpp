/*
 * Problem: 1371. 每个元音包含偶数次的最长子字符串 / Find the Longest Substring Containing Vowels in Even Counts
 * Link: https://leetcode.cn/problems/find-the-longest-substring-containing-vowels-in-even-counts/
 * Chapter: 数据结构
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
    int findTheLongestSubstring(string s) {
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
        string s = "eleetminicoworoep";
        auto localResult = solution.findTheLongestSubstring(s);
        int expected = 13;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "leetcodeisgreat";
        auto localResult = solution.findTheLongestSubstring(s);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "bcbcbc";
        auto localResult = solution.findTheLongestSubstring(s);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
