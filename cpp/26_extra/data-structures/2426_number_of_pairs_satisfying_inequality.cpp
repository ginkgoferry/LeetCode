/*
 * Problem: 2426. 满足不等式的数对数目 / Number of Pairs Satisfying Inequality
 * Link: https://leetcode.cn/problems/number-of-pairs-satisfying-inequality/
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
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int diff) {
        // TODO: 在这里实现你的解法。
        (void)nums1;
        (void)nums2;
        (void)diff;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums1 = {3, 2, 5};
        vector<int> nums2 = {2, 2, 1};
        int diff = 1;
        auto localResult = solution.numberOfPairs(nums1, nums2, diff);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {3, -1};
        vector<int> nums2 = {-2, 2};
        int diff = -1;
        auto localResult = solution.numberOfPairs(nums1, nums2, diff);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
