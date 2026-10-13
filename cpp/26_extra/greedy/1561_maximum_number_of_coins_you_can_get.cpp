/*
 * Problem: 1561. 你可以获得的最大硬币数目 / Maximum Number of Coins You Can Get
 * Link: https://leetcode.cn/problems/maximum-number-of-coins-you-can-get/
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
    int maxCoins(vector<int>& piles) {
        // TODO: 在这里实现你的解法。
        (void)piles;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> piles = {2, 4, 1, 2, 7, 8};
        auto localResult = solution.maxCoins(piles);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> piles = {2, 4, 5};
        auto localResult = solution.maxCoins(piles);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> piles = {9, 8, 7, 6, 5, 1, 2, 3, 4};
        auto localResult = solution.maxCoins(piles);
        int expected = 18;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
