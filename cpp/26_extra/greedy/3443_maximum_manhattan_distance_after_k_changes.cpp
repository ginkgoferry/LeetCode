/*
 * Problem: 3443. K 次修改后的最大曼哈顿距离 / Maximum Manhattan Distance After K Changes
 * Link: https://leetcode.cn/problems/maximum-manhattan-distance-after-k-changes/
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
    int maxDistance(string s, int k) {
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
        string s = "NWSE";
        int k = 1;
        auto localResult = solution.maxDistance(s, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "NSWWEW";
        int k = 3;
        auto localResult = solution.maxDistance(s, k);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
