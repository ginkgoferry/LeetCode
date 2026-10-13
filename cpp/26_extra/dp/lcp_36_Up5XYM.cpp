/*
 * Problem: LCP 36. 最多牌组数 / 最多牌组数
 * Link: https://leetcode.cn/problems/Up5XYM/
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
    int maxGroupNumber(vector<int>& tiles) {
        // TODO: 在这里实现你的解法。
        (void)tiles;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> tiles = {2, 2, 2, 3, 4};
        auto localResult = solution.maxGroupNumber(tiles);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> tiles = {2, 2, 2, 3, 4, 1, 3};
        auto localResult = solution.maxGroupNumber(tiles);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
