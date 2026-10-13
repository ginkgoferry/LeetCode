/*
 * Problem: 696. 计数二进制子串 / Count Binary Substrings
 * Link: https://leetcode.cn/problems/count-binary-substrings/
 * Chapter: 分组循环
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
    int countBinarySubstrings(string s) {
        // TODO: 在这里实现你的解法。
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "00110011";
        auto localResult = solution.countBinarySubstrings(s);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "10101";
        auto localResult = solution.countBinarySubstrings(s);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = "0";
        auto localResult = solution.countBinarySubstrings(s);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
