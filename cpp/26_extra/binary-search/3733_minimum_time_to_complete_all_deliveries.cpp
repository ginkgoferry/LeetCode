/*
 * Problem: 3733. 完成所有送货任务的最少时间 / Minimum Time to Complete All Deliveries
 * Link: https://leetcode.cn/problems/minimum-time-to-complete-all-deliveries/
 * Chapter: 二分查找
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
    long long minimumTime(vector<int>& d, vector<int>& r) {
        // TODO: 在这里实现你的解法。
        (void)d;
        (void)r;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> d = {3, 1};
        vector<int> r = {2, 3};
        auto localResult = solution.minimumTime(d, r);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> d = {1, 3};
        vector<int> r = {2, 2};
        auto localResult = solution.minimumTime(d, r);
        long long expected = 7LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> d = {2, 1};
        vector<int> r = {3, 4};
        auto localResult = solution.minimumTime(d, r);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
