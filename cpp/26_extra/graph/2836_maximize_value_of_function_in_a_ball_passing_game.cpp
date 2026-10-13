/*
 * Problem: 2836. 在传球游戏中最大化函数值 / Maximize Value of Function in a Ball Passing Game
 * Link: https://leetcode.cn/problems/maximize-value-of-function-in-a-ball-passing-game/
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
    long long getMaxFunctionValue(vector<int>& receiver, long long k) {
        // TODO: 在这里实现你的解法。
        (void)receiver;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> receiver = {2, 0, 1};
        long long k = 4LL;
        auto localResult = solution.getMaxFunctionValue(receiver, k);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> receiver = {1, 1, 1, 2, 3};
        long long k = 3LL;
        auto localResult = solution.getMaxFunctionValue(receiver, k);
        long long expected = 10LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
