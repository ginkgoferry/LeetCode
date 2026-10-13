/*
 * Problem: 2154. 将找到的值乘以 2 / Keep Multiplying Found Values by Two
 * Link: https://leetcode.cn/problems/keep-multiplying-found-values-by-two/
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
    int findFinalValue(vector<int>& nums, int original) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)original;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {5, 3, 6, 1, 12};
        int original = 3;
        auto localResult = solution.findFinalValue(nums, original);
        int expected = 24;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 7, 9};
        int original = 4;
        auto localResult = solution.findFinalValue(nums, original);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
