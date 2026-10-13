/*
 * Problem: 1723. 完成所有工作的最短时间 / Find Minimum Time to Finish All Jobs
 * Link: https://leetcode.cn/problems/find-minimum-time-to-finish-all-jobs/
 * Chapter: 动态规划
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
    int minimumTimeRequired(vector<int>& jobs, int k) {
        // TODO: 在这里实现你的解法。
        (void)jobs;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> jobs = {3, 2, 3};
        int k = 3;
        auto localResult = solution.minimumTimeRequired(jobs, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> jobs = {1, 2, 4, 7, 8};
        int k = 2;
        auto localResult = solution.minimumTimeRequired(jobs, k);
        int expected = 11;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
