/*
 * Problem: 3776. 使循环数组余额非负的最少移动次数 / Minimum Moves to Balance Circular Array
 * Link: https://leetcode.cn/problems/minimum-moves-to-balance-circular-array/
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
    long long minMoves(vector<int>& balance) {
        // TODO: 在这里实现你的解法。
        (void)balance;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> balance = {5, 1, -4};
        auto localResult = solution.minMoves(balance);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> balance = {1, 2, -5, 2};
        auto localResult = solution.minMoves(balance);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> balance = {-3, 2};
        auto localResult = solution.minMoves(balance);
        long long expected = -1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
