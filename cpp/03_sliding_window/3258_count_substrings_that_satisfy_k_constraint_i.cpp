/*
 * Problem: 3258. 统计满足 K 约束的子字符串数量 I / Count Substrings That Satisfy K-Constraint I
 * Link: https://leetcode.cn/problems/count-substrings-that-satisfy-k-constraint-i/
 * Chapter: 滑动窗口
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
    int countKConstraintSubstrings(string s, int k) {
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
        string s = "10101";
        int k = 1;
        auto localResult = solution.countKConstraintSubstrings(s, k);
        int expected = 12;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "1010101";
        int k = 2;
        auto localResult = solution.countKConstraintSubstrings(s, k);
        int expected = 25;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "11111";
        int k = 1;
        auto localResult = solution.countKConstraintSubstrings(s, k);
        int expected = 15;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
