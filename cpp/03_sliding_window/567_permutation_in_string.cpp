/*
 * Problem: 567. 字符串的排列 / Permutation in String
 * Link: https://leetcode.cn/problems/permutation-in-string/
 * Chapter: 滑动窗口
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
    bool checkInclusion(string s1, string s2) {
        // TODO: 在这里实现你的解法。
        (void)s1;
        (void)s2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s1 = "ab";
        string s2 = "eidbaooo";
        auto localResult = solution.checkInclusion(s1, s2);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s1 = "ab";
        string s2 = "eidboaoo";
        auto localResult = solution.checkInclusion(s1, s2);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
