/*
 * Problem: 3426. 所有安放棋子方案的曼哈顿距离 / Manhattan Distances of All Arrangements of Pieces
 * Link: https://leetcode.cn/problems/manhattan-distances-of-all-arrangements-of-pieces/
 * Chapter: 贪心算法
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
    int distanceSum(int m, int n, int k) {
        // TODO: 在这里实现你的解法。
        (void)m;
        (void)n;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int m = 2;
        int n = 2;
        int k = 2;
        auto localResult = solution.distanceSum(m, n, k);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int m = 1;
        int n = 4;
        int k = 3;
        auto localResult = solution.distanceSum(m, n, k);
        int expected = 20;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
