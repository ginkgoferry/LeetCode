/*
 * Problem: 3800. 使二进制字符串相等的最小成本 / Minimum Cost to Make Two Binary Strings Equal
 * Link: https://leetcode.cn/problems/minimum-cost-to-make-two-binary-strings-equal/
 * Chapter: 贪心算法
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
    long long minimumCost(string s, string t, int flipCost, int swapCost, int crossCost) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)t;
        (void)flipCost;
        (void)swapCost;
        (void)crossCost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "01000";
        string t = "10111";
        int flipCost = 10;
        int swapCost = 2;
        int crossCost = 2;
        auto localResult = solution.minimumCost(s, t, flipCost, swapCost, crossCost);
        long long expected = 16LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "001";
        string t = "110";
        int flipCost = 2;
        int swapCost = 100;
        int crossCost = 100;
        auto localResult = solution.minimumCost(s, t, flipCost, swapCost, crossCost);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "1010";
        string t = "1010";
        int flipCost = 5;
        int swapCost = 5;
        int crossCost = 5;
        auto localResult = solution.minimumCost(s, t, flipCost, swapCost, crossCost);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
