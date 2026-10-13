/*
 * Problem: 3899. 三角形的内角度数 / Angles of a Triangle
 * Link: https://leetcode.cn/problems/angles-of-a-triangle/
 * Chapter: 数学
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
    vector<double> internalAngles(vector<int>& sides) {
        // TODO: 在这里实现你的解法。
        (void)sides;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> sides = {3, 4, 5};
        auto localResult = solution.internalAngles(sides);
        vector<double> expected = {36.8699, 53.1301, 90.0};
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        vector<int> sides = {2, 4, 2};
        auto localResult = solution.internalAngles(sides);
        vector<double> expected = {};
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
