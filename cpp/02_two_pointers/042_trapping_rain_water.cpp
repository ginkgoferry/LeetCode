/*
 * Problem: 42. 接雨水 / Trapping Rain Water
 * Link: https://leetcode.cn/problems/trapping-rain-water/
 * Chapter: 双指针
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
    int trap(vector<int>& height) {
        // TODO: 在这里实现你的解法。
        (void)height;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
        assert((solution.trap(height) == 6));
    }

    {
        vector<int> height = {4, 2, 0, 3, 2, 5};
        assert((solution.trap(height) == 9));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
