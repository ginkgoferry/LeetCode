/*
 * Problem: 3147. 从魔法师身上吸取的最大能量 / Taking Maximum Energy From the Mystic Dungeon
 * Link: https://leetcode.cn/problems/taking-maximum-energy-from-the-mystic-dungeon/
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
    int maximumEnergy(vector<int>& energy, int k) {
        // TODO: 在这里实现你的解法。
        (void)energy;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> energy = {5, 2, -10, -5, 1};
        int k = 3;
        auto localResult = solution.maximumEnergy(energy, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> energy = {-2, -3, -1};
        int k = 2;
        auto localResult = solution.maximumEnergy(energy, k);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
