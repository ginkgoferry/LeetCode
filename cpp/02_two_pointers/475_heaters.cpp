/*
 * Problem: 475. 供暖器 / Heaters
 * Link: https://leetcode.cn/problems/heaters/
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
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        // TODO: 在这里实现你的解法。
        (void)houses;
        (void)heaters;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> houses = {1, 2, 3};
        vector<int> heaters = {2};
        auto localResult = solution.findRadius(houses, heaters);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> houses = {1, 2, 3, 4};
        vector<int> heaters = {1, 4};
        auto localResult = solution.findRadius(houses, heaters);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> houses = {1, 5};
        vector<int> heaters = {2};
        auto localResult = solution.findRadius(houses, heaters);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
