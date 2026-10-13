/*
 * Problem: 1402. 做菜顺序 / Reducing Dishes
 * Link: https://leetcode.cn/problems/reducing-dishes/
 * Chapter: 贪心算法
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
    int maxSatisfaction(vector<int>& satisfaction) {
        // TODO: 在这里实现你的解法。
        (void)satisfaction;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> satisfaction = {-1, -8, 0, 5, -9};
        auto localResult = solution.maxSatisfaction(satisfaction);
        int expected = 14;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> satisfaction = {4, 3, 2};
        auto localResult = solution.maxSatisfaction(satisfaction);
        int expected = 20;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> satisfaction = {-1, -4, -5};
        auto localResult = solution.maxSatisfaction(satisfaction);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
