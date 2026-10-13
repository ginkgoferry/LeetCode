/*
 * Problem: 12. 整数转罗马数字 / Integer to Roman
 * Link: https://leetcode.cn/problems/integer-to-roman/
 * Chapter: 数据结构
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
    string intToRoman(int num) {
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
        int num = 3749;
        auto localResult = solution.intToRoman(num);
        string expected = "MMMDCCXLIX";
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 58;
        auto localResult = solution.intToRoman(num);
        string expected = "LVIII";
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 1994;
        auto localResult = solution.intToRoman(num);
        string expected = "MCMXCIV";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
