/*
 * Problem: 3528. 单位转换 I / Unit Conversion I
 * Link: https://leetcode.cn/problems/unit-conversion-i/
 * Chapter: 树与回溯
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
    vector<int> baseUnitConversions(vector<vector<int>>& conversions) {
        // TODO: 在这里实现你的解法。
        (void)conversions;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> conversions = {{0, 1, 2}, {1, 2, 3}};
        auto localResult = solution.baseUnitConversions(conversions);
        vector<int> expected = {1, 2, 6};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> conversions = {{0, 1, 2}, {0, 2, 3}, {1, 3, 4}, {1, 4, 5}, {2, 5, 2}, {4, 6, 3}, {5, 7, 4}};
        auto localResult = solution.baseUnitConversions(conversions);
        vector<int> expected = {1, 2, 3, 8, 10, 6, 30, 24};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
