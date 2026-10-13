/*
 * Problem: 3363. 最多可收集的水果数目 / Find the Maximum Number of Fruits Collected
 * Link: https://leetcode.cn/problems/find-the-maximum-number-of-fruits-collected/
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
    int maxCollectedFruits(vector<vector<int>>& fruits) {
        // TODO: 在这里实现你的解法。
        (void)fruits;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> fruits = {{1, 2, 3, 4}, {5, 6, 8, 7}, {9, 10, 11, 12}, {13, 14, 15, 16}};
        auto localResult = solution.maxCollectedFruits(fruits);
        int expected = 100;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> fruits = {{1, 1}, {1, 1}};
        auto localResult = solution.maxCollectedFruits(fruits);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
