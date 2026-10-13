/*
 * Problem: 3035. 回文字符串的最大数量 / Maximum Palindromes After Operations
 * Link: https://leetcode.cn/problems/maximum-palindromes-after-operations/
 * Chapter: 贪心算法
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
    int maxPalindromesAfterOperations(vector<string>& words) {
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
        vector<string> words = {"abbb", "ba", "aa"};
        auto localResult = solution.maxPalindromesAfterOperations(words);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"abc", "ab"};
        auto localResult = solution.maxPalindromesAfterOperations(words);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"cd", "ef", "a"};
        auto localResult = solution.maxPalindromesAfterOperations(words);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
