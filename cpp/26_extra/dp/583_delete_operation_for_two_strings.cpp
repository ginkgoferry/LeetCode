/*
 * Problem: 583. 两个字符串的删除操作 / Delete Operation for Two Strings
 * Link: https://leetcode.cn/problems/delete-operation-for-two-strings/
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
    int minDistance(string word1, string word2) {
        // TODO: 在这里实现你的解法。
        (void)word1;
        (void)word2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word1 = "sea";
        string word2 = "eat";
        auto localResult = solution.minDistance(word1, word2);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "leetcode";
        string word2 = "etco";
        auto localResult = solution.minDistance(word1, word2);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
