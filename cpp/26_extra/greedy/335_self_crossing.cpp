/*
 * Problem: 335. 路径交叉 / Self Crossing
 * Link: https://leetcode.cn/problems/self-crossing/
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
    bool isSelfCrossing(vector<int>& distance) {
        // TODO: 在这里实现你的解法。
        (void)distance;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> distance = {2, 1, 1, 2};
        auto localResult = solution.isSelfCrossing(distance);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> distance = {1, 2, 3, 4};
        auto localResult = solution.isSelfCrossing(distance);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> distance = {1, 1, 1, 1};
        auto localResult = solution.isSelfCrossing(distance);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
