/*
 * Problem: 1687. 从仓库到码头运输箱子 / Delivering Boxes from Storage to Ports
 * Link: https://leetcode.cn/problems/delivering-boxes-from-storage-to-ports/
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
    int boxDelivering(vector<vector<int>>& boxes, int portsCount, int maxBoxes, int maxWeight) {
        // TODO: 在这里实现你的解法。
        (void)boxes;
        (void)portsCount;
        (void)maxBoxes;
        (void)maxWeight;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> boxes = {{1, 1}, {2, 1}, {1, 1}};
        int portsCount = 2;
        int maxBoxes = 3;
        int maxWeight = 3;
        auto localResult = solution.boxDelivering(boxes, portsCount, maxBoxes, maxWeight);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> boxes = {{1, 2}, {3, 3}, {3, 1}, {3, 1}, {2, 4}};
        int portsCount = 3;
        int maxBoxes = 3;
        int maxWeight = 6;
        auto localResult = solution.boxDelivering(boxes, portsCount, maxBoxes, maxWeight);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> boxes = {{1, 4}, {1, 2}, {2, 1}, {2, 1}, {3, 2}, {3, 4}};
        int portsCount = 3;
        int maxBoxes = 6;
        int maxWeight = 7;
        auto localResult = solution.boxDelivering(boxes, portsCount, maxBoxes, maxWeight);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> boxes = {{2, 4}, {2, 5}, {3, 1}, {3, 2}, {3, 7}, {3, 1}, {4, 4}, {1, 3}, {5, 2}};
        int portsCount = 5;
        int maxBoxes = 5;
        int maxWeight = 7;
        auto localResult = solution.boxDelivering(boxes, portsCount, maxBoxes, maxWeight);
        int expected = 14;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
