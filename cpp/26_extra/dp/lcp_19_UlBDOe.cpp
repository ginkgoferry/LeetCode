/*
 * Problem: LCP 19. 秋叶收藏集 / 秋叶收藏集
 * Link: https://leetcode.cn/problems/UlBDOe/
 * Chapter: 动态规划
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
    int minimumOperations(string leaves) {
        // TODO: 在这里实现你的解法。
        (void)leaves;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string leaves = "rrryyyrryyyrr";
        auto localResult = solution.minimumOperations(leaves);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string leaves = "ryr";
        auto localResult = solution.minimumOperations(leaves);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
