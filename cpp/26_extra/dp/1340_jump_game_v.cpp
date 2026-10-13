/*
 * Problem: 1340. 跳跃游戏 V / Jump Game V
 * Link: https://leetcode.cn/problems/jump-game-v/
 * Chapter: 栈
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
    int maxJumps(vector<int>& arr, int d) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        (void)d;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {6, 4, 14, 6, 8, 13, 9, 7, 10, 6, 12};
        int d = 2;
        auto localResult = solution.maxJumps(arr, d);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {3, 3, 3, 3, 3};
        int d = 3;
        auto localResult = solution.maxJumps(arr, d);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {7, 6, 5, 4, 3, 2, 1};
        int d = 1;
        auto localResult = solution.maxJumps(arr, d);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {7, 1, 7, 1, 7, 1};
        int d = 2;
        auto localResult = solution.maxJumps(arr, d);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {66};
        int d = 1;
        auto localResult = solution.maxJumps(arr, d);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
