/*
 * Problem: 3292. 形成目标字符串需要的最少字符串数 II / Minimum Number of Valid Strings to Form Target II
 * Link: https://leetcode.cn/problems/minimum-number-of-valid-strings-to-form-target-ii/
 * Chapter: 动态规划
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
    int minValidStrings(vector<string>& words, string target) {
        // TODO: 在这里实现你的解法。
        (void)words;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> words = {"abc", "aaaaa", "bcdef"};
        string target = "aabcdabc";
        auto localResult = solution.minValidStrings(words, target);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"abababab", "ab"};
        string target = "ababaababa";
        auto localResult = solution.minValidStrings(words, target);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"abcdef"};
        string target = "xyz";
        auto localResult = solution.minValidStrings(words, target);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
