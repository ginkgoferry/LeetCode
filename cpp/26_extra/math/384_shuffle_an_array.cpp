/*
 * Problem: 384. 打乱数组 / Shuffle an Array
 * Link: https://leetcode.cn/problems/shuffle-an-array/
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
    
    vector<int> reset() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    vector<int> shuffle() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        vector<int> nums = {1, 2, 3};
        Solution localObject(nums);
        {
            auto localResult = localObject.shuffle();
            vector<int> expected = {3, 1, 2};
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.reset();
            vector<int> expected = {1, 2, 3};
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.shuffle();
            vector<int> expected = {1, 3, 2};
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
