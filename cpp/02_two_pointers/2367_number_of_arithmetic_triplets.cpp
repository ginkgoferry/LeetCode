/*
 * Problem: 2367. 等差三元组的数目 / Number of Arithmetic Triplets
 * Link: https://leetcode.cn/problems/number-of-arithmetic-triplets/
 * Chapter: 双指针
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
    int arithmeticTriplets(vector<int>& nums, int diff) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)diff;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {0, 1, 4, 6, 7, 10};
        int diff = 3;
        auto localResult = solution.arithmeticTriplets(nums, diff);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 5, 6, 7, 8, 9};
        int diff = 2;
        auto localResult = solution.arithmeticTriplets(nums, diff);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
