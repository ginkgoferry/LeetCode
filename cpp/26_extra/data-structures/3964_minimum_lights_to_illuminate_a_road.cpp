/*
 * Problem: 3964. 照亮道路的最少灯泡数 / Minimum Lights to Illuminate a Road
 * Link: https://leetcode.cn/problems/minimum-lights-to-illuminate-a-road/
 * Chapter: 数据结构
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
    int minLights(vector<int>& lights) {
        // TODO: 在这里实现你的解法。
        (void)lights;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> lights = {0, 0, 0, 0};
        auto localResult = solution.minLights(lights);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> lights = {0, 0, 0, 2, 0};
        auto localResult = solution.minLights(lights);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
