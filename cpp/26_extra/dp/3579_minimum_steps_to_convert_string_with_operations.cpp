/*
 * Problem: 3579. 字符串转换需要的最小操作数 / Minimum Steps to Convert String with Operations
 * Link: https://leetcode.cn/problems/minimum-steps-to-convert-string-with-operations/
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
    int minOperations(string word1, string word2) {
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
        string word1 = "abcdf";
        string word2 = "dacbe";
        auto localResult = solution.minOperations(word1, word2);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "abceded";
        string word2 = "baecfef";
        auto localResult = solution.minOperations(word1, word2);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "abcdef";
        string word2 = "fedabc";
        auto localResult = solution.minOperations(word1, word2);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
