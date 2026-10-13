/*
 * Problem: 3720. 大于目标字符串的最小字典序排列 / Lexicographically Smallest Permutation Greater Than Target
 * Link: https://leetcode.cn/problems/lexicographically-smallest-permutation-greater-than-target/
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
    string lexGreaterPermutation(string s, string target) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abc";
        string target = "bba";
        auto localResult = solution.lexGreaterPermutation(s, target);
        string expected = "bca";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "leet";
        string target = "code";
        auto localResult = solution.lexGreaterPermutation(s, target);
        string expected = "eelt";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "baba";
        string target = "bbaa";
        auto localResult = solution.lexGreaterPermutation(s, target);
        string expected = "";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
