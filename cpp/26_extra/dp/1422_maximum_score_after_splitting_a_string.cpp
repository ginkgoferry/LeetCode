/*
 * Problem: 1422. 分割字符串的最大得分 / Maximum Score After Splitting a String
 * Link: https://leetcode.cn/problems/maximum-score-after-splitting-a-string/
 * Chapter: 动态规划
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
    int maxScore(string s) {
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
        string s = "011101";
        auto localResult = solution.maxScore(s);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "00111";
        auto localResult = solution.maxScore(s);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "1111";
        auto localResult = solution.maxScore(s);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
