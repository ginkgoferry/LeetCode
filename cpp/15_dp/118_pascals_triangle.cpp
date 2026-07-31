/*
 * Problem: 118. 杨辉三角 / Pascal's Triangle
 * Link: https://leetcode.cn/problems/pascals-triangle/
 * Chapter: 动态规划
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
    vector<vector<int>> generate(int numRows) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        int numRows = 5;
        assert((solution.generate(numRows) == vector<vector<int>>{{1}, {1, 1}, {1, 2, 1}, {1, 3, 3, 1}, {1, 4, 6, 4, 1}}));
    }

    {
        int numRows = 1;
        assert((solution.generate(numRows) == vector<vector<int>>{{1}}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
