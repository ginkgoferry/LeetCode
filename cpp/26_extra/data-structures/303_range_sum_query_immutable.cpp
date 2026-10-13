/*
 * Problem: 303. 区域和检索 - 数组不可变 / Range Sum Query - Immutable
 * Link: https://leetcode.cn/problems/range-sum-query-immutable/
 * Chapter: 数据结构
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

class NumArray {
public:
    NumArray(vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)nums;
    }
    
    int sumRange(int left, int right) {
        // TODO: 在这里实现你的解法。
        (void)left;
        (void)right;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        vector<int> nums = {-2, 0, 3, -5, 2, -1};
        NumArray localObject(nums);
        {
            int left = 0;
            int right = 2;
            auto localResult = localObject.sumRange(left, right);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int left = 2;
            int right = 5;
            auto localResult = localObject.sumRange(left, right);
            int expected = -1;
            assert((localResult == expected));
        }
        {
            int left = 0;
            int right = 5;
            auto localResult = localObject.sumRange(left, right);
            int expected = -3;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
