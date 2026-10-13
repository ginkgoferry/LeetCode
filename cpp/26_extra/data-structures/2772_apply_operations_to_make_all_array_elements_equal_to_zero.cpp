/*
 * Problem: 2772. 使数组中的所有元素都等于零 / Apply Operations to Make All Array Elements Equal to Zero
 * Link: https://leetcode.cn/problems/apply-operations-to-make-all-array-elements-equal-to-zero/
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
    bool checkArray(vector<int>& nums, int k) {
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
        vector<int> nums = {2, 2, 3, 1, 1, 0};
        int k = 3;
        auto localResult = solution.checkArray(nums, k);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 3, 1, 1};
        int k = 2;
        auto localResult = solution.checkArray(nums, k);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
