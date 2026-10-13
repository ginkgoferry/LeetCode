/*
 * Problem: 2460. 对数组执行操作 / Apply Operations to an Array
 * Link: https://leetcode.cn/problems/apply-operations-to-an-array/
 * Chapter: 双指针
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
    vector<int> applyOperations(vector<int>& nums) {
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
        vector<int> nums = {1, 2, 2, 1, 1, 0};
        auto localResult = solution.applyOperations(nums);
        vector<int> expected = {1, 4, 2, 0, 0, 0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {0, 1};
        auto localResult = solution.applyOperations(nums);
        vector<int> expected = {1, 0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
