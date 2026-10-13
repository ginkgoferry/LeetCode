/*
 * Problem: 3320. 统计能获胜的出招序列数 / Count The Number of Winning Sequences
 * Link: https://leetcode.cn/problems/count-the-number-of-winning-sequences/
 * Chapter: 动态规划
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
    int countWinningSequences(string s) {
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
        string s = "FFF";
        auto localResult = solution.countWinningSequences(s);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "FWEFW";
        auto localResult = solution.countWinningSequences(s);
        int expected = 18;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
