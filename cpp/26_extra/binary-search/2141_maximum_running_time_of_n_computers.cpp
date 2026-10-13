/*
 * Problem: 2141. 同时运行 N 台电脑的最长时间 / Maximum Running Time of N Computers
 * Link: https://leetcode.cn/problems/maximum-running-time-of-n-computers/
 * Chapter: 二分查找
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
    long long maxRunTime(int n, vector<int>& batteries) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)batteries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        vector<int> batteries = {3, 3, 3};
        auto localResult = solution.maxRunTime(n, batteries);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        vector<int> batteries = {1, 1, 1, 1};
        auto localResult = solution.maxRunTime(n, batteries);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
