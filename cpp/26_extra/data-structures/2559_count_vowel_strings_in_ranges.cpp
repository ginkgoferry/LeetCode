/*
 * Problem: 2559. 统计范围内的元音字符串数 / Count Vowel Strings in Ranges
 * Link: https://leetcode.cn/problems/count-vowel-strings-in-ranges/
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
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)words;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> words = {"aba", "bcb", "ece", "aa", "e"};
        vector<vector<int>> queries = {{0, 2}, {1, 4}, {1, 1}};
        auto localResult = solution.vowelStrings(words, queries);
        vector<int> expected = {2, 3, 0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"a", "e", "i"};
        vector<vector<int>> queries = {{0, 2}, {0, 1}, {2, 2}};
        auto localResult = solution.vowelStrings(words, queries);
        vector<int> expected = {3, 2, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
