/*
 * Problem: 564. 寻找最近的回文数 / Find the Closest Palindrome
 * Link: https://leetcode.cn/problems/find-the-closest-palindrome/
 * Chapter: 数学
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
    string nearestPalindromic(string n) {
        // TODO: 在这里实现你的解法。
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string n = "123";
        auto localResult = solution.nearestPalindromic(n);
        string expected = "121";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string n = "1";
        auto localResult = solution.nearestPalindromic(n);
        string expected = "0";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
