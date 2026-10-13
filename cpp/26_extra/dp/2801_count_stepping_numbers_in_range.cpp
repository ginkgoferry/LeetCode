/*
 * Problem: 2801. 统计范围内的步进数字数目 / Count Stepping Numbers in Range
 * Link: https://leetcode.cn/problems/count-stepping-numbers-in-range/
 * Chapter: 动态规划
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
    int countSteppingNumbers(string low, string high) {
        // TODO: 在这里实现你的解法。
        (void)low;
        (void)high;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string low = "1";
        string high = "11";
        auto localResult = solution.countSteppingNumbers(low, high);
        int expected = 10;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string low = "90";
        string high = "101";
        auto localResult = solution.countSteppingNumbers(low, high);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
