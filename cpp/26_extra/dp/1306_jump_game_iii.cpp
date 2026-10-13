/*
 * Problem: 1306. 跳跃游戏 III / Jump Game III
 * Link: https://leetcode.cn/problems/jump-game-iii/
 * Chapter: 图论
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
    bool canReach(vector<int>& arr, int start) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        (void)start;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {4, 2, 3, 0, 3, 1, 2};
        int start = 5;
        auto localResult = solution.canReach(arr, start);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {4, 2, 3, 0, 3, 1, 2};
        int start = 0;
        auto localResult = solution.canReach(arr, start);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {3, 0, 2, 1, 2};
        int start = 2;
        auto localResult = solution.canReach(arr, start);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
