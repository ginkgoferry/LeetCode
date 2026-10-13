/*
 * Problem: 1033. 移动石子直到连续 / Moving Stones Until Consecutive
 * Link: https://leetcode.cn/problems/moving-stones-until-consecutive/
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
    vector<int> numMovesStones(int a, int b, int c) {
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
        int a = 1;
        int b = 2;
        int c = 5;
        auto localResult = solution.numMovesStones(a, b, c);
        vector<int> expected = {1, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int a = 4;
        int b = 3;
        int c = 2;
        auto localResult = solution.numMovesStones(a, b, c);
        vector<int> expected = {0, 0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
