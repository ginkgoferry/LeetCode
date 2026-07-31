/*
 * Problem: 75. 颜色分类 / Sort Colors
 * Link: https://leetcode.cn/problems/sort-colors/
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
    void sortColors(vector<int>& nums) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {2, 0, 2, 1, 1, 0};
        solution.sortColors(nums);
        assert((nums == vector<int>{0, 0, 1, 1, 2, 2}));
    }

    {
        vector<int> nums = {2, 0, 1};
        solution.sortColors(nums);
        assert((nums == vector<int>{0, 1, 2}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
