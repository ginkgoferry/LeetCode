/*
 * Problem: 84. 柱状图中最大的矩形 / Largest Rectangle in Histogram
 * Link: https://leetcode.cn/problems/largest-rectangle-in-histogram/
 * Chapter: 栈
 * Difficulty: Hard
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
    int largestRectangleArea(vector<int>& heights) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> heights = {2, 1, 5, 6, 2, 3};
        assert((solution.largestRectangleArea(heights) == 10));
    }

    {
        vector<int> heights = {2, 4};
        assert((solution.largestRectangleArea(heights) == 4));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
