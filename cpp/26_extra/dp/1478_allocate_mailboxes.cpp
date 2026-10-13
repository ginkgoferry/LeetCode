/*
 * Problem: 1478. 安排邮筒 / Allocate Mailboxes
 * Link: https://leetcode.cn/problems/allocate-mailboxes/
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
    int minDistance(vector<int>& houses, int k) {
        // TODO: 在这里实现你的解法。
        (void)houses;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> houses = {1, 4, 8, 10, 20};
        int k = 3;
        auto localResult = solution.minDistance(houses, k);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> houses = {2, 3, 5, 12, 18};
        int k = 2;
        auto localResult = solution.minDistance(houses, k);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> houses = {7, 4, 6, 1};
        int k = 1;
        auto localResult = solution.minDistance(houses, k);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> houses = {3, 6, 14, 10};
        int k = 4;
        auto localResult = solution.minDistance(houses, k);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
