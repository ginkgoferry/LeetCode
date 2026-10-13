/*
 * Problem: 1000. 合并石头的最低成本 / Minimum Cost to Merge Stones
 * Link: https://leetcode.cn/problems/minimum-cost-to-merge-stones/
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
    int mergeStones(vector<int>& stones, int k) {
        // TODO: 在这里实现你的解法。
        (void)stones;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> stones = {3, 2, 4, 1};
        int k = 2;
        auto localResult = solution.mergeStones(stones, k);
        int expected = 20;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> stones = {3, 2, 4, 1};
        int k = 3;
        auto localResult = solution.mergeStones(stones, k);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> stones = {3, 5, 1, 2, 6};
        int k = 3;
        auto localResult = solution.mergeStones(stones, k);
        int expected = 25;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
