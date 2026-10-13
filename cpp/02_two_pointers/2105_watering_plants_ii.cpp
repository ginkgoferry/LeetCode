/*
 * Problem: 2105. 给植物浇水 II / Watering Plants II
 * Link: https://leetcode.cn/problems/watering-plants-ii/
 * Chapter: 双指针
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
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        // TODO: 在这里实现你的解法。
        (void)plants;
        (void)capacityA;
        (void)capacityB;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> plants = {2, 2, 3, 3};
        int capacityA = 5;
        int capacityB = 5;
        auto localResult = solution.minimumRefill(plants, capacityA, capacityB);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> plants = {2, 2, 3, 3};
        int capacityA = 3;
        int capacityB = 4;
        auto localResult = solution.minimumRefill(plants, capacityA, capacityB);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> plants = {5};
        int capacityA = 10;
        int capacityB = 8;
        auto localResult = solution.minimumRefill(plants, capacityA, capacityB);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
