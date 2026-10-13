/*
 * Problem: 347. 前 K 个高频元素 / Top K Frequent Elements
 * Link: https://leetcode.cn/problems/top-k-frequent-elements/
 * Chapter: 堆
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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {1, 1, 1, 2, 2, 3};
        int k = 2;
        auto result = solution.topKFrequent(nums, k);
        auto expected = vector<int>{1, 2};
        sort(result.begin(), result.end());
        sort(expected.begin(), expected.end());
        assert((result == expected));
    }

    {
        vector<int> nums = {1};
        int k = 1;
        auto result = solution.topKFrequent(nums, k);
        auto expected = vector<int>{1};
        sort(result.begin(), result.end());
        sort(expected.begin(), expected.end());
        assert((result == expected));
    }

    {
        vector<int> nums = {1, 2, 1, 2, 1, 2, 3, 1, 3, 2};
        int k = 2;
        auto result = solution.topKFrequent(nums, k);
        auto expected = vector<int>{1, 2};
        sort(result.begin(), result.end());
        sort(expected.begin(), expected.end());
        assert((result == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
