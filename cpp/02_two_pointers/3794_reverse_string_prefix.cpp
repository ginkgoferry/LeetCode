/*
 * Problem: 3794. 反转字符串前缀 / Reverse String Prefix
 * Link: https://leetcode.cn/problems/reverse-string-prefix/
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
    string reversePrefix(string s, int k) {
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
        string s = "abcd";
        int k = 2;
        auto localResult = solution.reversePrefix(s, k);
        string expected = "bacd";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "xyz";
        int k = 3;
        auto localResult = solution.reversePrefix(s, k);
        string expected = "zyx";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "hey";
        int k = 1;
        auto localResult = solution.reversePrefix(s, k);
        string expected = "hey";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
