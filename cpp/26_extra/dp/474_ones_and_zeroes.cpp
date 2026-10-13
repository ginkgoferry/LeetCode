/*
 * Problem: 474. 一和零 / Ones and Zeroes
 * Link: https://leetcode.cn/problems/ones-and-zeroes/
 * Chapter: 动态规划
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
    int findMaxForm(vector<string>& strs, int m, int n) {
        // TODO: 在这里实现你的解法。
        (void)strs;
        (void)m;
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> strs = {"10", "0001", "111001", "1", "0"};
        int m = 5;
        int n = 3;
        auto localResult = solution.findMaxForm(strs, m, n);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> strs = {"10", "0", "1"};
        int m = 1;
        int n = 1;
        auto localResult = solution.findMaxForm(strs, m, n);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
