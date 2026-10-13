/*
 * Problem: 287. 寻找重复数 / Find the Duplicate Number
 * Link: https://leetcode.cn/problems/find-the-duplicate-number/
 * Chapter: 技巧
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
    int findDuplicate(vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {1, 3, 4, 2, 2};
        assert((solution.findDuplicate(nums) == 2));
    }

    {
        vector<int> nums = {3, 1, 3, 4, 2};
        assert((solution.findDuplicate(nums) == 3));
    }

    {
        vector<int> nums = {3, 3, 3, 3, 3};
        assert((solution.findDuplicate(nums) == 3));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
