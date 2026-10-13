/*
 * Problem: 2211. 统计道路上的碰撞次数 / Count Collisions on a Road
 * Link: https://leetcode.cn/problems/count-collisions-on-a-road/
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
    int countCollisions(string directions) {
        // TODO: 在这里实现你的解法。
        (void)directions;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string directions = "RLRSLL";
        auto localResult = solution.countCollisions(directions);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string directions = "LLRR";
        auto localResult = solution.countCollisions(directions);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
