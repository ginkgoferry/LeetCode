/*
 * Problem: 4043. 恰好有 K 对相等相邻字符的循环移位数量 / Count Rotations With Exactly K Equal Adjacent Pairs
 * Link: https://leetcode.cn/problems/count-rotations-with-exactly-k-equal-adjacent-pairs/
 * Chapter: 滑动窗口
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
    int countRotations(string s, int k) {
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
        string s = "aab";
        int k = 1;
        auto localResult = solution.countRotations(s, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abca";
        int k = 0;
        auto localResult = solution.countRotations(s, k);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
