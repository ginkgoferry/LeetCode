/*
 * Problem: 3568. 清理教室的最少移动 / Minimum Moves to Clean the Classroom
 * Link: https://leetcode.cn/problems/minimum-moves-to-clean-the-classroom/
 * Chapter: 网格图
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
    int minMoves(vector<string>& classroom, int energy) {
        // TODO: 在这里实现你的解法。
        (void)classroom;
        (void)energy;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> classroom = {"S.", "XL"};
        int energy = 2;
        auto localResult = solution.minMoves(classroom, energy);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> classroom = {"LS", "RL"};
        int energy = 4;
        auto localResult = solution.minMoves(classroom, energy);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> classroom = {"L.S", "RXL"};
        int energy = 3;
        auto localResult = solution.minMoves(classroom, energy);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
