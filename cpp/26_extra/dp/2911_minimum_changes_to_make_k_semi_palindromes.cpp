/*
 * Problem: 2911. 得到 K 个半回文串的最少修改次数 / Minimum Changes to Make K Semi-palindromes
 * Link: https://leetcode.cn/problems/minimum-changes-to-make-k-semi-palindromes/
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
    int minimumChanges(string s, int k) {
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
        string s = "abcac";
        int k = 2;
        auto localResult = solution.minimumChanges(s, k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcdef";
        int k = 2;
        auto localResult = solution.minimumChanges(s, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aabbaa";
        int k = 3;
        auto localResult = solution.minimumChanges(s, k);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
