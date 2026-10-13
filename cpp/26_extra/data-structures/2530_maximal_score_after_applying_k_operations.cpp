/*
 * Problem: 2530. 执行 K 次操作后的最大分数 / Maximal Score After Applying K Operations
 * Link: https://leetcode.cn/problems/maximal-score-after-applying-k-operations/
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
    long long maxKelements(vector<int>& nums, int k) {
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
        // 官方样例
        vector<int> nums = {10, 10, 10, 10, 10};
        int k = 5;
        auto localResult = solution.maxKelements(nums, k);
        long long expected = 50LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 10, 3, 3, 3};
        int k = 3;
        auto localResult = solution.maxKelements(nums, k);
        long long expected = 17LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
