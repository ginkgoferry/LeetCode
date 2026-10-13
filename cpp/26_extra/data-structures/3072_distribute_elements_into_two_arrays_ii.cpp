/*
 * Problem: 3072. 将元素分配到两个数组中 II / Distribute Elements Into Two Arrays II
 * Link: https://leetcode.cn/problems/distribute-elements-into-two-arrays-ii/
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
    vector<int> resultArray(vector<int>& nums) {
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
        vector<int> nums = {2, 1, 3, 3};
        auto localResult = solution.resultArray(nums);
        vector<int> expected = {2, 3, 1, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 14, 3, 1, 2};
        auto localResult = solution.resultArray(nums);
        vector<int> expected = {5, 3, 1, 2, 14};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 3, 3, 3};
        auto localResult = solution.resultArray(nums);
        vector<int> expected = {3, 3, 3, 3};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
