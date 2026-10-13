/*
 * Problem: 2857. 统计距离为 k 的点对 / Count Pairs of Points With Distance k
 * Link: https://leetcode.cn/problems/count-pairs-of-points-with-distance-k/
 * Chapter: 位运算
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
    int countPairs(vector<vector<int>>& coordinates, int k) {
        // TODO: 在这里实现你的解法。
        (void)coordinates;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> coordinates = {{1, 2}, {4, 2}, {1, 3}, {5, 2}};
        int k = 5;
        auto localResult = solution.countPairs(coordinates, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> coordinates = {{1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}};
        int k = 0;
        auto localResult = solution.countPairs(coordinates, k);
        int expected = 10;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
