/*
 * Problem: 3086. 拾起 K 个 1 需要的最少行动次数 / Minimum Moves to Pick K Ones
 * Link: https://leetcode.cn/problems/minimum-moves-to-pick-k-ones/
 * Chapter: 数据结构
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
    long long minimumMoves(vector<int>& nums, int k, int maxChanges) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        (void)maxChanges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 1, 0, 0, 0, 1, 1, 0, 0, 1};
        int k = 3;
        int maxChanges = 1;
        auto localResult = solution.minimumMoves(nums, k, maxChanges);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {0, 0, 0, 0};
        int k = 2;
        int maxChanges = 3;
        auto localResult = solution.minimumMoves(nums, k, maxChanges);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
