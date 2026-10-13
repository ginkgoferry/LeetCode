/*
 * Problem: 1505. 最多 K 次交换相邻数位后得到的最小整数 / Minimum Possible Integer After at Most K Adjacent Swaps On Digits
 * Link: https://leetcode.cn/problems/minimum-possible-integer-after-at-most-k-adjacent-swaps-on-digits/
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
    string minInteger(string num, int k) {
        // TODO: 在这里实现你的解法。
        (void)num;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string num = "4321";
        int k = 4;
        auto localResult = solution.minInteger(num, k);
        string expected = "1342";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "100";
        int k = 1;
        auto localResult = solution.minInteger(num, k);
        string expected = "010";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "36789";
        int k = 1000;
        auto localResult = solution.minInteger(num, k);
        string expected = "36789";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
