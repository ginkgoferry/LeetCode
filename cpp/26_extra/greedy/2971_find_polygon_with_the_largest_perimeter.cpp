/*
 * Problem: 2971. 找到最大周长的多边形 / Find Polygon With the Largest Perimeter
 * Link: https://leetcode.cn/problems/find-polygon-with-the-largest-perimeter/
 * Chapter: 贪心算法
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
    long long largestPerimeter(vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {5, 5, 5};
        auto localResult = solution.largestPerimeter(nums);
        long long expected = 15LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 12, 1, 2, 5, 50, 3};
        auto localResult = solution.largestPerimeter(nums);
        long long expected = 12LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 5, 50};
        auto localResult = solution.largestPerimeter(nums);
        long long expected = -1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
