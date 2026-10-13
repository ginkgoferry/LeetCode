/*
 * Problem: 2264. 字符串中最大的 3 位相同数字 / Largest 3-Same-Digit Number in String
 * Link: https://leetcode.cn/problems/largest-3-same-digit-number-in-string/
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
    string largestGoodInteger(string num) {
        // TODO: 在这里实现你的解法。
        (void)num;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string num = "6777133339";
        auto localResult = solution.largestGoodInteger(num);
        string expected = "777";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "2300019";
        auto localResult = solution.largestGoodInteger(num);
        string expected = "000";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "42352338";
        auto localResult = solution.largestGoodInteger(num);
        string expected = "";
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string num = "000";
        auto localResult = solution.largestGoodInteger(num);
        string expected = "000";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
