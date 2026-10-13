/*
 * Problem: 4045. 统计机器人组数 / Count Robot Groups
 * Link: https://leetcode.cn/problems/count-robot-groups/
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
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        // TODO: 在这里实现你的解法。
        (void)position;
        (void)speed;
        (void)distance;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> position = {1, 5, 6, 20};
        vector<int> speed = {4, 3, 2, 3};
        int distance = 1;
        auto localResult = solution.countGroups(position, speed, distance);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> position = {1, 5, 9};
        vector<int> speed = {3, 2, 2};
        int distance = 2;
        auto localResult = solution.countGroups(position, speed, distance);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> position = {9};
        vector<int> speed = {8};
        int distance = 5;
        auto localResult = solution.countGroups(position, speed, distance);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
