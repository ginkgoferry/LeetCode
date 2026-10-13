/*
 * Problem: 2233. K 次增加后的最大乘积 / Maximum Product After K Increments
 * Link: https://leetcode.cn/problems/maximum-product-after-k-increments/
 * Chapter: 数据结构
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
    int maximumProduct(vector<int>& nums, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {0, 4};
        int k = 5;
        auto localResult = solution.maximumProduct(nums, k);
        int expected = 20;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {6, 3, 3, 2};
        int k = 2;
        auto localResult = solution.maximumProduct(nums, k);
        int expected = 216;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
