/*
 * Problem: 3365. 重排子字符串以形成目标字符串 / Rearrange K Substrings to Form Target String
 * Link: https://leetcode.cn/problems/rearrange-k-substrings-to-form-target-string/
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
    bool isPossibleToRearrange(string s, string t, int k) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)t;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abcd";
        string t = "cdab";
        int k = 2;
        auto localResult = solution.isPossibleToRearrange(s, t, k);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aabbcc";
        string t = "bbaacc";
        int k = 3;
        auto localResult = solution.isPossibleToRearrange(s, t, k);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aabbcc";
        string t = "bbaacc";
        int k = 2;
        auto localResult = solution.isPossibleToRearrange(s, t, k);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
