/*
 * Problem: 1278. 分割回文串 III / Palindrome Partitioning III
 * Link: https://leetcode.cn/problems/palindrome-partitioning-iii/
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
    int palindromePartition(string s, int k) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abc";
        int k = 2;
        auto localResult = solution.palindromePartition(s, k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aabbc";
        int k = 3;
        auto localResult = solution.palindromePartition(s, k);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "leetcode";
        int k = 8;
        auto localResult = solution.palindromePartition(s, k);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
