/*
 * Problem: 3325. 字符至少出现 K 次的子字符串 I / Count Substrings With K-Frequency Characters I
 * Link: https://leetcode.cn/problems/count-substrings-with-k-frequency-characters-i/
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
    int numberOfSubstrings(string s, int k) {
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
        string s = "abacb";
        int k = 2;
        auto localResult = solution.numberOfSubstrings(s, k);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcde";
        int k = 1;
        auto localResult = solution.numberOfSubstrings(s, k);
        int expected = 15;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
