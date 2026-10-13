/*
 * Problem: 1759. 统计同质子字符串的数目 / Count Number of Homogenous Substrings
 * Link: https://leetcode.cn/problems/count-number-of-homogenous-substrings/
 * Chapter: 分组循环
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
    int countHomogenous(string s) {
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
        string s = "abbcccaa";
        auto localResult = solution.countHomogenous(s);
        int expected = 13;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "xy";
        auto localResult = solution.countHomogenous(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "zzzzz";
        auto localResult = solution.countHomogenous(s);
        int expected = 15;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = "a";
        auto localResult = solution.countHomogenous(s);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
