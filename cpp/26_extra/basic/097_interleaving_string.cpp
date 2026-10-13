/*
 * Problem: 97. 交错字符串 / Interleaving String
 * Link: https://leetcode.cn/problems/interleaving-string/
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
    bool isInterleave(string s1, string s2, string s3) {
        // TODO: 在这里实现你的解法。
        (void)s1;
        (void)s2;
        (void)s3;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s1 = "aabcc";
        string s2 = "dbbca";
        string s3 = "aadbbcbcac";
        auto localResult = solution.isInterleave(s1, s2, s3);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s1 = "aabcc";
        string s2 = "dbbca";
        string s3 = "aadbbbaccc";
        auto localResult = solution.isInterleave(s1, s2, s3);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s1 = "";
        string s2 = "";
        string s3 = "";
        auto localResult = solution.isInterleave(s1, s2, s3);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
