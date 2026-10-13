/*
 * Problem: 2929. 给小朋友们分糖果 II / Distribute Candies Among Children II
 * Link: https://leetcode.cn/problems/distribute-candies-among-children-ii/
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
    long long distributeCandies(int n, int limit) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)limit;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        int limit = 2;
        auto localResult = solution.distributeCandies(n, limit);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        int limit = 3;
        auto localResult = solution.distributeCandies(n, limit);
        long long expected = 10LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
