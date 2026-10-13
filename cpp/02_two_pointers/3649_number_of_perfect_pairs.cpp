/*
 * Problem: 3649. 完美对的数目 / Number of Perfect Pairs
 * Link: https://leetcode.cn/problems/number-of-perfect-pairs/
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
    long long perfectPairs(vector<int>& nums) {
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
        vector<int> nums = {0, 1, 2, 3};
        auto localResult = solution.perfectPairs(nums);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-3, 2, -1, 4};
        auto localResult = solution.perfectPairs(nums);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 10, 100, 1000};
        auto localResult = solution.perfectPairs(nums);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
