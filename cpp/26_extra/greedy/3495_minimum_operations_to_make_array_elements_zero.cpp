/*
 * Problem: 3495. 使数组元素都变为零的最少操作次数 / Minimum Operations to Make Array Elements Zero
 * Link: https://leetcode.cn/problems/minimum-operations-to-make-array-elements-zero/
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
    long long minOperations(vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> queries = {{1, 2}, {2, 4}};
        auto localResult = solution.minOperations(queries);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> queries = {{2, 6}};
        auto localResult = solution.minOperations(queries);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
