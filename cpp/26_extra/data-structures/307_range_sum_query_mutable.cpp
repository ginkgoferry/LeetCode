/*
 * Problem: 307. 区域和检索 - 数组可修改 / Range Sum Query - Mutable
 * Link: https://leetcode.cn/problems/range-sum-query-mutable/
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
    
    void update(int index, int val) {
        // TODO: 在这里实现你的解法。
        (void)index;
        (void)val;
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
        vector<int> nums = {1, 3, 5};
        NumArray localObject(nums);
        {
            int left = 0;
            int right = 2;
            auto localResult = localObject.sumRange(left, right);
            int expected = 9;
            assert((localResult == expected));
        }
        {
            int index = 1;
            int val = 2;
            localObject.update(index, val);
        }
        {
            int left = 0;
            int right = 2;
            auto localResult = localObject.sumRange(left, right);
            int expected = 8;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
