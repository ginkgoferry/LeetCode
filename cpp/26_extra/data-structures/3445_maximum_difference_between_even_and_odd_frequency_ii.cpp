/*
 * Problem: 3445. 奇偶频次间的最大差值 II / Maximum Difference Between Even and Odd Frequency II
 * Link: https://leetcode.cn/problems/maximum-difference-between-even-and-odd-frequency-ii/
 * Chapter: 数据结构
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
    int maxDifference(string s, int k) {
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
        string s = "12233";
        int k = 4;
        auto localResult = solution.maxDifference(s, k);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "1122211";
        int k = 3;
        auto localResult = solution.maxDifference(s, k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "110";
        int k = 3;
        auto localResult = solution.maxDifference(s, k);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
