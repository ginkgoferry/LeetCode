/*
 * Problem: 4051. 统计遥远子数组的数目 / Count Subarrays with Distant Sums
 * Link: https://leetcode.cn/problems/count-subarrays-with-distant-sums/
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
    long long distantSubarrays(vector<int>& nums, int goal, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)goal;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, 1};
        int goal = 4;
        int k = 1;
        auto localResult = solution.distantSubarrays(nums, goal, k);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, -1, 3};
        int goal = 2;
        int k = 2;
        auto localResult = solution.distantSubarrays(nums, goal, k);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-3, 1, 2};
        int goal = 0;
        int k = 3;
        auto localResult = solution.distantSubarrays(nums, goal, k);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
