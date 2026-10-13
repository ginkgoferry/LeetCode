/*
 * Problem: 2213. 由单个字符重复的最长子字符串 / Longest Substring of One Repeating Character
 * Link: https://leetcode.cn/problems/longest-substring-of-one-repeating-character/
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
    vector<int> longestRepeating(string s, string queryCharacters, vector<int>& queryIndices) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)queryCharacters;
        (void)queryIndices;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "babacc";
        string queryCharacters = "bcb";
        vector<int> queryIndices = {1, 3, 3};
        auto localResult = solution.longestRepeating(s, queryCharacters, queryIndices);
        vector<int> expected = {3, 3, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abyzz";
        string queryCharacters = "aa";
        vector<int> queryIndices = {2, 1};
        auto localResult = solution.longestRepeating(s, queryCharacters, queryIndices);
        vector<int> expected = {2, 3};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
