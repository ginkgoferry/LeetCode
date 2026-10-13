/*
 * Problem: 2565. 最少得分子序列 / Subsequence With the Minimum Score
 * Link: https://leetcode.cn/problems/subsequence-with-the-minimum-score/
 * Chapter: 双指针
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
    int minimumScore(string s, string t) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)t;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abacaba";
        string t = "bzaa";
        auto localResult = solution.minimumScore(s, t);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "cde";
        string t = "xyz";
        auto localResult = solution.minimumScore(s, t);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
