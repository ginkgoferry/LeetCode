/*
 * Problem: 1621. 大小为 K 的不重叠线段的数目 / Number of Sets of K Non-Overlapping Line Segments
 * Link: https://leetcode.cn/problems/number-of-sets-of-k-non-overlapping-line-segments/
 * Chapter: 数学
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
    int numberOfSets(int n, int k) {
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
        int n = 4;
        int k = 2;
        auto localResult = solution.numberOfSets(n, k);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        int k = 1;
        auto localResult = solution.numberOfSets(n, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 30;
        int k = 7;
        auto localResult = solution.numberOfSets(n, k);
        int expected = 796297179;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int k = 3;
        auto localResult = solution.numberOfSets(n, k);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        int k = 2;
        auto localResult = solution.numberOfSets(n, k);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
