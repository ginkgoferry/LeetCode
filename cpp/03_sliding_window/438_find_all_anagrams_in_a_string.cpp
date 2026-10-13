/*
 * Problem: 438. 找到字符串中所有字母异位词 / Find All Anagrams in a String
 * Link: https://leetcode.cn/problems/find-all-anagrams-in-a-string/
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
    vector<int> findAnagrams(string s, string p) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)p;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        string s = "cbaebabacd";
        string p = "abc";
        assert((solution.findAnagrams(s, p) == vector<int>{0, 6}));
    }

    {
        string s = "abab";
        string p = "ab";
        assert((solution.findAnagrams(s, p) == vector<int>{0, 1, 2}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
