/*
 * Problem: 9. 回文数 / Palindrome Number
 * Link: https://leetcode.cn/problems/palindrome-number/
 * Chapter: 数学
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
    bool isPalindrome(int x) {
        // TODO: 在这里实现你的解法。
        (void)x;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int x = 121;
        auto localResult = solution.isPalindrome(x);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int x = -121;
        auto localResult = solution.isPalindrome(x);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int x = 10;
        auto localResult = solution.isPalindrome(x);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
