/*
 * Problem: 1298. 你能从盒子里获得的最大糖果数 / Maximum Candies You Can Get from Boxes
 * Link: https://leetcode.cn/problems/maximum-candies-you-can-get-from-boxes/
 * Chapter: 图论
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
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        // TODO: 在这里实现你的解法。
        (void)status;
        (void)candies;
        (void)keys;
        (void)containedBoxes;
        (void)initialBoxes;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> status = {1, 0, 1, 0};
        vector<int> candies = {7, 5, 4, 100};
        vector<vector<int>> keys = {{}, {}, {1}, {}};
        vector<vector<int>> containedBoxes = {{1, 2}, {3}, {}, {}};
        vector<int> initialBoxes = {0};
        auto localResult = solution.maxCandies(status, candies, keys, containedBoxes, initialBoxes);
        int expected = 16;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> status = {1, 0, 0, 0, 0, 0};
        vector<int> candies = {1, 1, 1, 1, 1, 1};
        vector<vector<int>> keys = {{1, 2, 3, 4, 5}, {}, {}, {}, {}, {}};
        vector<vector<int>> containedBoxes = {{1, 2, 3, 4, 5}, {}, {}, {}, {}, {}};
        vector<int> initialBoxes = {0};
        auto localResult = solution.maxCandies(status, candies, keys, containedBoxes, initialBoxes);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> status = {1, 1, 1};
        vector<int> candies = {100, 1, 100};
        vector<vector<int>> keys = {{}, {0, 2}, {}};
        vector<vector<int>> containedBoxes = {{}, {}, {}};
        vector<int> initialBoxes = {1};
        auto localResult = solution.maxCandies(status, candies, keys, containedBoxes, initialBoxes);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> status = {1};
        vector<int> candies = {100};
        vector<vector<int>> keys = {{}};
        vector<vector<int>> containedBoxes = {{}};
        vector<int> initialBoxes = {};
        auto localResult = solution.maxCandies(status, candies, keys, containedBoxes, initialBoxes);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> status = {1, 1, 1};
        vector<int> candies = {2, 3, 2};
        vector<vector<int>> keys = {{}, {}, {}};
        vector<vector<int>> containedBoxes = {{}, {}, {}};
        vector<int> initialBoxes = {2, 1, 0};
        auto localResult = solution.maxCandies(status, candies, keys, containedBoxes, initialBoxes);
        int expected = 7;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
