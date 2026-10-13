/*
 * Problem: LCP 12. 小张刷题计划 / 小张刷题计划
 * Link: https://leetcode.cn/problems/xiao-zhang-shua-ti-ji-hua/
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
    int minTime(vector<int>& time, int m) {
        // TODO: 在这里实现你的解法。
        (void)time;
        (void)m;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> time = {1, 2, 3, 3};
        int m = 2;
        auto localResult = solution.minTime(time, m);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> time = {999, 999, 999};
        int m = 4;
        auto localResult = solution.minTime(time, m);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
