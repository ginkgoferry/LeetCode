/*
 * Problem: 1963. 使字符串平衡的最小交换次数 / Minimum Number of Swaps to Make the String Balanced
 * Link: https://leetcode.cn/problems/minimum-number-of-swaps-to-make-the-string-balanced/
 * Chapter: 数据结构
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
    int minSwaps(string s) {
        // TODO: 在这里实现你的解法。
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "][][";
        auto localResult = solution.minSwaps(s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "]]][[[";
        auto localResult = solution.minSwaps(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "[]";
        auto localResult = solution.minSwaps(s);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
