/*
 * Problem: 403. 青蛙过河 / Frog Jump
 * Link: https://leetcode.cn/problems/frog-jump/
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
    bool canCross(vector<int>& stones) {
        // TODO: 在这里实现你的解法。
        (void)stones;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> stones = {0, 1, 3, 5, 6, 8, 12, 17};
        auto localResult = solution.canCross(stones);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> stones = {0, 1, 2, 3, 4, 8, 9, 11};
        auto localResult = solution.canCross(stones);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
