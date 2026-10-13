/*
 * Problem: 2914. 使二进制字符串变美丽的最少修改次数 / Minimum Number of Changes to Make Binary String Beautiful
 * Link: https://leetcode.cn/problems/minimum-number-of-changes-to-make-binary-string-beautiful/
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
    int minChanges(string s) {
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
        string s = "1001";
        auto localResult = solution.minChanges(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "10";
        auto localResult = solution.minChanges(s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "0000";
        auto localResult = solution.minChanges(s);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
