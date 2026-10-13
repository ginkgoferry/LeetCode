/*
 * Problem: 3694. 删除子字符串后不同的终点 / Distinct Points Reachable After Substring Removal
 * Link: https://leetcode.cn/problems/distinct-points-reachable-after-substring-removal/
 * Chapter: 滑动窗口
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
    int distinctPoints(string s, int k) {
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
        string s = "LUL";
        int k = 1;
        auto localResult = solution.distinctPoints(s, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "UDLR";
        int k = 4;
        auto localResult = solution.distinctPoints(s, k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "UU";
        int k = 1;
        auto localResult = solution.distinctPoints(s, k);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
