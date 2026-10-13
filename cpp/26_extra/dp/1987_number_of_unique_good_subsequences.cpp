/*
 * Problem: 1987. 不同的好子序列数目 / Number of Unique Good Subsequences
 * Link: https://leetcode.cn/problems/number-of-unique-good-subsequences/
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
    int numberOfUniqueGoodSubsequences(string binary) {
        // TODO: 在这里实现你的解法。
        (void)binary;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string binary = "001";
        auto localResult = solution.numberOfUniqueGoodSubsequences(binary);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string binary = "11";
        auto localResult = solution.numberOfUniqueGoodSubsequences(binary);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string binary = "101";
        auto localResult = solution.numberOfUniqueGoodSubsequences(binary);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
