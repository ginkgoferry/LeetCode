/*
 * Problem: 1753. 移除石子的最大得分 / Maximum Score From Removing Stones
 * Link: https://leetcode.cn/problems/maximum-score-from-removing-stones/
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
    int maximumScore(int a, int b, int c) {
        // TODO: 在这里实现你的解法。
        (void)a;
        (void)b;
        (void)c;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int a = 2;
        int b = 4;
        int c = 6;
        auto localResult = solution.maximumScore(a, b, c);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int a = 4;
        int b = 4;
        int c = 6;
        auto localResult = solution.maximumScore(a, b, c);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int a = 1;
        int b = 8;
        int c = 8;
        auto localResult = solution.maximumScore(a, b, c);
        int expected = 8;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
