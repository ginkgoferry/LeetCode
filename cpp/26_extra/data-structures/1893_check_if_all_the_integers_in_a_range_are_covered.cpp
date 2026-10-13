/*
 * Problem: 1893. 检查是否区域内所有整数都被覆盖 / Check if All the Integers in a Range Are Covered
 * Link: https://leetcode.cn/problems/check-if-all-the-integers-in-a-range-are-covered/
 * Chapter: 数据结构
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
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        // TODO: 在这里实现你的解法。
        (void)ranges;
        (void)left;
        (void)right;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> ranges = {{1, 2}, {3, 4}, {5, 6}};
        int left = 2;
        int right = 5;
        auto localResult = solution.isCovered(ranges, left, right);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> ranges = {{1, 10}, {10, 20}};
        int left = 21;
        int right = 21;
        auto localResult = solution.isCovered(ranges, left, right);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
