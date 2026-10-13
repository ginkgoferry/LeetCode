/*
 * Problem: 2900. 最长相邻不相等子序列 I / Longest Unequal Adjacent Groups Subsequence I
 * Link: https://leetcode.cn/problems/longest-unequal-adjacent-groups-subsequence-i/
 * Chapter: 分组循环
 * Difficulty: Easy
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
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        // TODO: 在这里实现你的解法。
        (void)words;
        (void)groups;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> words = {"e", "a", "b"};
        vector<int> groups = {0, 0, 1};
        auto localResult = solution.getLongestSubsequence(words, groups);
        assert(localResult.size() == 2);
        size_t cursor = 0;
        int previousGroup = -1;
        for (const auto& word : localResult) {
            while (cursor < words.size() && words[cursor] != word) ++cursor;
            assert(cursor < words.size());
            assert(groups[cursor] != previousGroup);
            previousGroup = groups[cursor++];
        }
    }

    {
        // 官方样例
        vector<string> words = {"a", "b", "c", "d"};
        vector<int> groups = {1, 0, 1, 1};
        auto localResult = solution.getLongestSubsequence(words, groups);
        assert(localResult.size() == 3);
        size_t cursor = 0;
        int previousGroup = -1;
        for (const auto& word : localResult) {
            while (cursor < words.size() && words[cursor] != word) ++cursor;
            assert(cursor < words.size());
            assert(groups[cursor] != previousGroup);
            previousGroup = groups[cursor++];
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
