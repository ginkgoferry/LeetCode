/*
 * Problem: 2965. 找出缺失和重复的数字 / Find Missing and Repeated Values
 * Link: https://leetcode.cn/problems/find-missing-and-repeated-values/
 * Chapter: 位运算
 * Difficulty: Easy
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
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 3}, {2, 2}};
        auto localResult = solution.findMissingAndRepeatedValues(grid);
        vector<int> expected = {2, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};
        auto localResult = solution.findMissingAndRepeatedValues(grid);
        vector<int> expected = {9, 5};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
