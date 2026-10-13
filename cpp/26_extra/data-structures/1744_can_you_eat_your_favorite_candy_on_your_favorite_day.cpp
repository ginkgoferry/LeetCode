/*
 * Problem: 1744. 你能在你最喜欢的那天吃到你最喜欢的糖果吗？ / Can You Eat Your Favorite Candy on Your Favorite Day?
 * Link: https://leetcode.cn/problems/can-you-eat-your-favorite-candy-on-your-favorite-day/
 * Chapter: 数据结构
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
    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)candiesCount;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> candiesCount = {7, 4, 5, 3, 8};
        vector<vector<int>> queries = {{0, 2, 2}, {4, 2, 4}, {2, 13, 1000000000}};
        auto localResult = solution.canEat(candiesCount, queries);
        vector<bool> expected = {true, false, true};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> candiesCount = {5, 2, 6, 4, 1};
        vector<vector<int>> queries = {{3, 1, 2}, {4, 10, 3}, {3, 10, 100}, {4, 100, 30}, {1, 3, 1}};
        auto localResult = solution.canEat(candiesCount, queries);
        vector<bool> expected = {false, true, true, false, false};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
