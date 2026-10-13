/*
 * Problem: 2901. 最长相邻不相等子序列 II / Longest Unequal Adjacent Groups Subsequence II
 * Link: https://leetcode.cn/problems/longest-unequal-adjacent-groups-subsequence-ii/
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
    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
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
        vector<string> words = {"bab", "dab", "cab"};
        vector<int> groups = {1, 2, 2};
        const auto localOriginalWords = words;
        const auto localOriginalGroups = groups;
        auto localResult = solution.getWordsInLongestSubsequence(words, groups);
        assert(localResult.size() == 2);
        vector<size_t> possible;
        for (size_t step = 0; step < localResult.size(); ++step) {
            vector<size_t> next;
            for (size_t i = 0; i < localOriginalWords.size(); ++i) {
                if (localOriginalWords[i] != localResult[step]) continue;
                if (step == 0) { next.push_back(i); continue; }
                for (size_t previous : possible) {
                    if (previous >= i || localOriginalGroups[previous] == localOriginalGroups[i]) continue;
                    const auto& a = localOriginalWords[previous]; const auto& b = localOriginalWords[i];
                    if (a.size() != b.size()) continue;
                    int distance = 0; for (size_t p = 0; p < a.size(); ++p) distance += a[p] != b[p];
                    if (distance == 1) { next.push_back(i); break; }
                }
            }
            assert(!next.empty()); possible = std::move(next);
        }
    }

    {
        // 官方样例
        vector<string> words = {"a", "b", "c", "d"};
        vector<int> groups = {1, 2, 3, 4};
        const auto localOriginalWords = words;
        const auto localOriginalGroups = groups;
        auto localResult = solution.getWordsInLongestSubsequence(words, groups);
        assert(localResult.size() == 4);
        vector<size_t> possible;
        for (size_t step = 0; step < localResult.size(); ++step) {
            vector<size_t> next;
            for (size_t i = 0; i < localOriginalWords.size(); ++i) {
                if (localOriginalWords[i] != localResult[step]) continue;
                if (step == 0) { next.push_back(i); continue; }
                for (size_t previous : possible) {
                    if (previous >= i || localOriginalGroups[previous] == localOriginalGroups[i]) continue;
                    const auto& a = localOriginalWords[previous]; const auto& b = localOriginalWords[i];
                    if (a.size() != b.size()) continue;
                    int distance = 0; for (size_t p = 0; p < a.size(); ++p) distance += a[p] != b[p];
                    if (distance == 1) { next.push_back(i); break; }
                }
            }
            assert(!next.empty()); possible = std::move(next);
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
