/*
 * Problem: 2555. 两个线段获得的最多奖品 / Maximize Win From Two Segments
 * Link: https://leetcode.cn/problems/maximize-win-from-two-segments/
 * Chapter: 滑动窗口
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
    int maximizeWin(vector<int>& prizePositions, int k) {
        // TODO: 在这里实现你的解法。
        (void)prizePositions;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> prizePositions = {1, 1, 2, 2, 3, 3, 5};
        int k = 2;
        auto localResult = solution.maximizeWin(prizePositions, k);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> prizePositions = {1, 2, 3, 4};
        int k = 0;
        auto localResult = solution.maximizeWin(prizePositions, k);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
