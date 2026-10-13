/*
 * Problem: 967. 连续差相同的数字 / Numbers With Same Consecutive Differences
 * Link: https://leetcode.cn/problems/numbers-with-same-consecutive-differences/
 * Chapter: 树与回溯
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
    vector<int> numsSameConsecDiff(int n, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        int k = 7;
        auto localResult = solution.numsSameConsecDiff(n, k);
        vector<int> expected = {181, 292, 707, 818, 929};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        int k = 1;
        auto localResult = solution.numsSameConsecDiff(n, k);
        vector<int> expected = {10, 12, 21, 23, 32, 34, 43, 45, 54, 56, 65, 67, 76, 78, 87, 89, 98};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        int k = 0;
        auto localResult = solution.numsSameConsecDiff(n, k);
        vector<int> expected = {11, 22, 33, 44, 55, 66, 77, 88, 99};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        int k = 2;
        auto localResult = solution.numsSameConsecDiff(n, k);
        vector<int> expected = {13, 20, 24, 31, 35, 42, 46, 53, 57, 64, 68, 75, 79, 86, 97};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
