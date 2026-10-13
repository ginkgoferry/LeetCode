/*
 * Problem: 1981. 最小化目标值与所选元素的差 / Minimize the Difference Between Target and Chosen Elements
 * Link: https://leetcode.cn/problems/minimize-the-difference-between-target-and-chosen-elements/
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
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        // TODO: 在这里实现你的解法。
        (void)mat;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int target = 13;
        auto localResult = solution.minimizeTheDifference(mat, target);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> mat = {{1}, {2}, {3}};
        int target = 100;
        auto localResult = solution.minimizeTheDifference(mat, target);
        int expected = 94;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> mat = {{1, 2, 9, 8, 7}};
        int target = 6;
        auto localResult = solution.minimizeTheDifference(mat, target);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
