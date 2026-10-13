/*
 * Problem: 3. 无重复字符的最长子串 / Longest Substring Without Repeating Characters
 * Link: https://leetcode.cn/problems/longest-substring-without-repeating-characters/
 * Chapter: 滑动窗口
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
    int lengthOfLongestSubstring(string s) {
        // TODO: 在这里实现你的解法。
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        string s = "abcabcbb";
        assert((solution.lengthOfLongestSubstring(s) == 3));
    }

    {
        string s = "bbbbb";
        assert((solution.lengthOfLongestSubstring(s) == 1));
    }

    {
        string s = "pwwkew";
        assert((solution.lengthOfLongestSubstring(s) == 3));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
