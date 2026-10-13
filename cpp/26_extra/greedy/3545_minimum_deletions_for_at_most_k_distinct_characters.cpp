/*
 * Problem: 3545. 不同字符数量最多为 K 时的最少删除数 / Minimum Deletions for At Most K Distinct Characters
 * Link: https://leetcode.cn/problems/minimum-deletions-for-at-most-k-distinct-characters/
 * Chapter: 贪心算法
 * Difficulty: Easy
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
    int minDeletion(string s, int k) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abc";
        int k = 2;
        auto localResult = solution.minDeletion(s, k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aabb";
        int k = 2;
        auto localResult = solution.minDeletion(s, k);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "yyyzz";
        int k = 1;
        auto localResult = solution.minDeletion(s, k);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
