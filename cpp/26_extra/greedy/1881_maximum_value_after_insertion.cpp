/*
 * Problem: 1881. 插入后的最大值 / Maximum Value after Insertion
 * Link: https://leetcode.cn/problems/maximum-value-after-insertion/
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
    string maxValue(string n, int x) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)x;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string n = "99";
        int x = 9;
        auto localResult = solution.maxValue(n, x);
        string expected = "999";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string n = "-13";
        int x = 2;
        auto localResult = solution.maxValue(n, x);
        string expected = "-123";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
