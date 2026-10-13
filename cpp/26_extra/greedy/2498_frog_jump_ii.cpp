/*
 * Problem: 2498. 青蛙过河 II / Frog Jump II
 * Link: https://leetcode.cn/problems/frog-jump-ii/
 * Chapter: 贪心算法
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
    int maxJump(vector<int>& stones) {
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
        vector<int> stones = {0, 2, 5, 6, 7};
        auto localResult = solution.maxJump(stones);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> stones = {0, 3, 9};
        auto localResult = solution.maxJump(stones);
        int expected = 9;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
