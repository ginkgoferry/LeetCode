/*
 * Problem: 3480. 删除一个冲突对后最大子数组数目 / Maximize Subarrays After Removing One Conflicting Pair
 * Link: https://leetcode.cn/problems/maximize-subarrays-after-removing-one-conflicting-pair/
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
    long long maxSubarrays(int n, vector<vector<int>>& conflictingPairs) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)conflictingPairs;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> conflictingPairs = {{2, 3}, {1, 4}};
        auto localResult = solution.maxSubarrays(n, conflictingPairs);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> conflictingPairs = {{1, 2}, {2, 5}, {3, 5}};
        auto localResult = solution.maxSubarrays(n, conflictingPairs);
        long long expected = 12LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
