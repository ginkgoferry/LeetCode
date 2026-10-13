/*
 * Problem: 392. 判断子序列 / Is Subsequence
 * Link: https://leetcode.cn/problems/is-subsequence/
 * Chapter: 双指针
 * Difficulty: Easy
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
    bool isSubsequence(string s, string t) {
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
        string s = "abc";
        string t = "ahbgdc";
        auto localResult = solution.isSubsequence(s, t);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "axc";
        string t = "ahbgdc";
        auto localResult = solution.isSubsequence(s, t);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = "";
        string t = "";
        auto localResult = solution.isSubsequence(s, t);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
