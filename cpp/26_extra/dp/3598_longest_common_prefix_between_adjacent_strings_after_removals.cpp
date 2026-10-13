/*
 * Problem: 3598. 相邻字符串之间的最长公共前缀 / Longest Common Prefix Between Adjacent Strings After Removals
 * Link: https://leetcode.cn/problems/longest-common-prefix-between-adjacent-strings-after-removals/
 * Chapter: 动态规划
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
    vector<int> longestCommonPrefix(vector<string>& words) {
        // TODO: 在这里实现你的解法。
        (void)words;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> words = {"jump", "run", "run", "jump", "run"};
        auto localResult = solution.longestCommonPrefix(words);
        vector<int> expected = {3, 0, 0, 3, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"dog", "racer", "car"};
        auto localResult = solution.longestCommonPrefix(words);
        vector<int> expected = {0, 0, 0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
