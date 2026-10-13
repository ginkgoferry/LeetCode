/*
 * Problem: 2259. 移除指定数字得到的最大结果 / Remove Digit From Number to Maximize Result
 * Link: https://leetcode.cn/problems/remove-digit-from-number-to-maximize-result/
 * Chapter: 贪心算法
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
    string removeDigit(string number, char digit) {
        // TODO: 在这里实现你的解法。
        (void)number;
        (void)digit;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string number = "123";
        char digit = '3';
        auto localResult = solution.removeDigit(number, digit);
        string expected = "12";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string number = "1231";
        char digit = '1';
        auto localResult = solution.removeDigit(number, digit);
        string expected = "231";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string number = "551";
        char digit = '5';
        auto localResult = solution.removeDigit(number, digit);
        string expected = "51";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
