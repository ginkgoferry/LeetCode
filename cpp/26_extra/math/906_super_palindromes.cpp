/*
 * Problem: 906. 超级回文数 / Super Palindromes
 * Link: https://leetcode.cn/problems/super-palindromes/
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
    int superpalindromesInRange(string left, string right) {
        // TODO: 在这里实现你的解法。
        (void)left;
        (void)right;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string left = "4";
        string right = "1000";
        auto localResult = solution.superpalindromesInRange(left, right);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string left = "1";
        string right = "2";
        auto localResult = solution.superpalindromesInRange(left, right);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
