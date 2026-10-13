/*
 * Problem: 398. 随机数索引 / Random Pick Index
 * Link: https://leetcode.cn/problems/random-pick-index/
 * Chapter: 数学
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
    Solution(vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)nums;
    }
    
    int pick(int target) {
        // TODO: 在这里实现你的解法。
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        vector<int> nums = {1, 2, 3, 3, 3};
        const auto localOriginalNums = nums;
        // 随机接口检查结果合法性；概率分布需要另行验证。
        Solution localObject(nums);
        {
            int target = 3;
            auto localResult = localObject.pick(target);
            assert(localResult >= 0 && static_cast<size_t>(localResult) < localOriginalNums.size());
            assert(localOriginalNums[localResult] == target);
        }
        {
            int target = 1;
            auto localResult = localObject.pick(target);
            assert(localResult >= 0 && static_cast<size_t>(localResult) < localOriginalNums.size());
            assert(localOriginalNums[localResult] == target);
        }
        {
            int target = 3;
            auto localResult = localObject.pick(target);
            assert(localResult >= 0 && static_cast<size_t>(localResult) < localOriginalNums.size());
            assert(localOriginalNums[localResult] == target);
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
