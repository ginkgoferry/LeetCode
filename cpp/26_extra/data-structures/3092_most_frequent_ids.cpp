/*
 * Problem: 3092. 最高频率的 ID / Most Frequent IDs
 * Link: https://leetcode.cn/problems/most-frequent-ids/
 * Chapter: 数据结构
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
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)freq;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 3, 2, 1};
        vector<int> freq = {3, 2, -3, 1};
        auto localResult = solution.mostFrequentIDs(nums, freq);
        vector<long long> expected = {3LL, 3LL, 2LL, 2LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 5, 3};
        vector<int> freq = {2, -2, 1};
        auto localResult = solution.mostFrequentIDs(nums, freq);
        vector<long long> expected = {2LL, 0LL, 1LL};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
