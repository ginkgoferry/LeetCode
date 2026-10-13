/*
 * Problem: 1345. 跳跃游戏 IV / Jump Game IV
 * Link: https://leetcode.cn/problems/jump-game-iv/
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
    int minJumps(vector<int>& arr) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {100, -23, -23, 404, 100, 23, 23, 23, 3, 404};
        auto localResult = solution.minJumps(arr);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {7};
        auto localResult = solution.minJumps(arr);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {7, 6, 9, 6, 9, 6, 9, 7};
        auto localResult = solution.minJumps(arr);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
