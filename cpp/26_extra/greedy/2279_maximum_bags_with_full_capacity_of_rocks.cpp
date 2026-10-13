/*
 * Problem: 2279. 装满石头的背包的最大数量 / Maximum Bags With Full Capacity of Rocks
 * Link: https://leetcode.cn/problems/maximum-bags-with-full-capacity-of-rocks/
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
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        // TODO: 在这里实现你的解法。
        (void)capacity;
        (void)rocks;
        (void)additionalRocks;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> capacity = {2, 3, 4, 5};
        vector<int> rocks = {1, 2, 4, 4};
        int additionalRocks = 2;
        auto localResult = solution.maximumBags(capacity, rocks, additionalRocks);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> capacity = {10, 2, 2};
        vector<int> rocks = {2, 2, 0};
        int additionalRocks = 100;
        auto localResult = solution.maximumBags(capacity, rocks, additionalRocks);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
