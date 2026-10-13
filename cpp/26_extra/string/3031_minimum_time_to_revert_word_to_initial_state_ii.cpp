/*
 * Problem: 3031. 将单词恢复初始状态所需的最短时间 II / Minimum Time to Revert Word to Initial State II
 * Link: https://leetcode.cn/problems/minimum-time-to-revert-word-to-initial-state-ii/
 * Chapter: 字符串
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
    int minimumTimeToInitialState(string word, int k) {
        // TODO: 在这里实现你的解法。
        (void)word;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word = "abacaba";
        int k = 3;
        auto localResult = solution.minimumTimeToInitialState(word, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "abacaba";
        int k = 4;
        auto localResult = solution.minimumTimeToInitialState(word, k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "abcbabcd";
        int k = 2;
        auto localResult = solution.minimumTimeToInitialState(word, k);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
