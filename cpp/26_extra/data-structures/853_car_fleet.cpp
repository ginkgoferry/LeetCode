/*
 * Problem: 853. 车队 / Car Fleet
 * Link: https://leetcode.cn/problems/car-fleet/
 * Chapter: 栈
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
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        // TODO: 在这里实现你的解法。
        (void)target;
        (void)position;
        (void)speed;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int target = 12;
        vector<int> position = {10, 8, 0, 5, 3};
        vector<int> speed = {2, 4, 1, 1, 3};
        auto localResult = solution.carFleet(target, position, speed);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int target = 10;
        vector<int> position = {3};
        vector<int> speed = {3};
        auto localResult = solution.carFleet(target, position, speed);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int target = 100;
        vector<int> position = {0, 2, 4};
        vector<int> speed = {4, 2, 1};
        auto localResult = solution.carFleet(target, position, speed);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
