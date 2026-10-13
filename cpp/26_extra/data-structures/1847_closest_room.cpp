/*
 * Problem: 1847. 最近的房间 / Closest Room
 * Link: https://leetcode.cn/problems/closest-room/
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
    vector<int> closestRoom(vector<vector<int>>& rooms, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)rooms;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> rooms = {{2, 2}, {1, 2}, {3, 2}};
        vector<vector<int>> queries = {{3, 1}, {3, 3}, {5, 2}};
        auto localResult = solution.closestRoom(rooms, queries);
        vector<int> expected = {3, -1, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> rooms = {{1, 4}, {2, 3}, {3, 5}, {4, 1}, {5, 2}};
        vector<vector<int>> queries = {{2, 3}, {2, 4}, {2, 5}};
        auto localResult = solution.closestRoom(rooms, queries);
        vector<int> expected = {2, 1, 3};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
