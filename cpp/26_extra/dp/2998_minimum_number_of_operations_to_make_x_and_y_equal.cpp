/*
 * Problem: 2998. 使 X 和 Y 相等的最少操作次数 / Minimum Number of Operations to Make X and Y Equal
 * Link: https://leetcode.cn/problems/minimum-number-of-operations-to-make-x-and-y-equal/
 * Chapter: 图论
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
    int minimumOperationsToMakeEqual(int x, int y) {
        // TODO: 在这里实现你的解法。
        (void)x;
        (void)y;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int x = 26;
        int y = 1;
        auto localResult = solution.minimumOperationsToMakeEqual(x, y);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int x = 54;
        int y = 2;
        auto localResult = solution.minimumOperationsToMakeEqual(x, y);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int x = 25;
        int y = 30;
        auto localResult = solution.minimumOperationsToMakeEqual(x, y);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
