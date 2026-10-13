/*
 * Problem: 461. 汉明距离 / Hamming Distance
 * Link: https://leetcode.cn/problems/hamming-distance/
 * Chapter: 位运算
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
    int hammingDistance(int x, int y) {
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
        int x = 1;
        int y = 4;
        auto localResult = solution.hammingDistance(x, y);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int x = 3;
        int y = 1;
        auto localResult = solution.hammingDistance(x, y);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
