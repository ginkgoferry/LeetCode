/*
 * Problem: 3745. 三元素表达式的最大值 / Maximize Expression of Three Elements
 * Link: https://leetcode.cn/problems/maximize-expression-of-three-elements/
 * Chapter: 贪心算法
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
    int maximizeExpressionOfThree(vector<int>& nums) {
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
        vector<int> nums = {1, 4, 2, 5};
        auto localResult = solution.maximizeExpressionOfThree(nums);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-2, 0, 5, -2, 4};
        auto localResult = solution.maximizeExpressionOfThree(nums);
        int expected = 11;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
