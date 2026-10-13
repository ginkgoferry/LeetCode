/*
 * Problem: 3922. 使二进制字符串连贯的最少翻转次数 / Minimum Flips to Make Binary String Coherent
 * Link: https://leetcode.cn/problems/minimum-flips-to-make-binary-string-coherent/
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
    int minFlips(string s) {
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
        string s = "1010";
        auto localResult = solution.minFlips(s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "0110";
        auto localResult = solution.minFlips(s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "1000";
        auto localResult = solution.minFlips(s);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
