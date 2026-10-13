/*
 * Problem: 11. 盛最多水的容器 / Container With Most Water
 * Link: https://leetcode.cn/problems/container-with-most-water/
 * Chapter: 双指针
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
    int maxArea(vector<int>& height) {
        // TODO: 在这里实现你的解法。
        (void)height;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
        assert((solution.maxArea(height) == 49));
    }

    {
        vector<int> height = {1, 1};
        assert((solution.maxArea(height) == 1));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
