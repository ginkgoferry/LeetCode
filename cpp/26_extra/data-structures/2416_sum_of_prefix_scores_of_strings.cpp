/*
 * Problem: 2416. 字符串的前缀分数和 / Sum of Prefix Scores of Strings
 * Link: https://leetcode.cn/problems/sum-of-prefix-scores-of-strings/
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
    vector<int> sumPrefixScores(vector<string>& words) {
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
        vector<string> words = {"abc", "ab", "bc", "b"};
        auto localResult = solution.sumPrefixScores(words);
        vector<int> expected = {5, 4, 3, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"abcd"};
        auto localResult = solution.sumPrefixScores(words);
        vector<int> expected = {4};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
