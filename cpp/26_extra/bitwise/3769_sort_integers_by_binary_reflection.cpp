/*
 * Problem: 3769. 二进制反射排序 / Sort Integers by Binary Reflection
 * Link: https://leetcode.cn/problems/sort-integers-by-binary-reflection/
 * Chapter: 位运算
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
    vector<int> sortByReflection(vector<int>& nums) {
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
        vector<int> nums = {4, 5, 4};
        auto localResult = solution.sortByReflection(nums);
        vector<int> expected = {4, 4, 5};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 6, 5, 8};
        auto localResult = solution.sortByReflection(nums);
        vector<int> expected = {8, 3, 6, 5};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
