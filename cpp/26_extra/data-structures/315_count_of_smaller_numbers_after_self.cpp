/*
 * Problem: 315. 计算右侧小于当前元素的个数 / Count of Smaller Numbers After Self
 * Link: https://leetcode.cn/problems/count-of-smaller-numbers-after-self/
 * Chapter: 数据结构
 * Difficulty: Hard
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
    vector<int> countSmaller(vector<int>& nums) {
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
        vector<int> nums = {5, 2, 6, 1};
        auto localResult = solution.countSmaller(nums);
        vector<int> expected = {2, 1, 1, 0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-1};
        auto localResult = solution.countSmaller(nums);
        vector<int> expected = {0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-1, -1};
        auto localResult = solution.countSmaller(nums);
        vector<int> expected = {0, 0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
