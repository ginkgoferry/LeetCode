/*
 * Problem: 517. 超级洗衣机 / Super Washing Machines
 * Link: https://leetcode.cn/problems/super-washing-machines/
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
    int findMinMoves(vector<int>& machines) {
        // TODO: 在这里实现你的解法。
        (void)machines;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> machines = {1, 0, 5};
        auto localResult = solution.findMinMoves(machines);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> machines = {0, 3, 0};
        auto localResult = solution.findMinMoves(machines);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> machines = {0, 2, 0};
        auto localResult = solution.findMinMoves(machines);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
