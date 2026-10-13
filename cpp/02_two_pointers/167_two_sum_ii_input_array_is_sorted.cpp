/*
 * Problem: 167. 两数之和 II - 输入有序数组 / Two Sum II - Input Array Is Sorted
 * Link: https://leetcode.cn/problems/two-sum-ii-input-array-is-sorted/
 * Chapter: 双指针
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
    vector<int> twoSum(vector<int>& numbers, int target) {
        // TODO: 在这里实现你的解法。
        (void)numbers;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> numbers = {2, 7, 11, 15};
        int target = 9;
        auto localResult = solution.twoSum(numbers, target);
        vector<int> expected = {1, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> numbers = {2, 3, 4};
        int target = 6;
        auto localResult = solution.twoSum(numbers, target);
        vector<int> expected = {1, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> numbers = {-1, 0};
        int target = -1;
        auto localResult = solution.twoSum(numbers, target);
        vector<int> expected = {1, 2};
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> numbers = {0, 0};
        int target = 0;
        auto localResult = solution.twoSum(numbers, target);
        vector<int> expected = {1, 2};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
