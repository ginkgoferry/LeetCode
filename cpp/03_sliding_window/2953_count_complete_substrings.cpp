/*
 * Problem: 2953. 统计完全子字符串 / Count Complete Substrings
 * Link: https://leetcode.cn/problems/count-complete-substrings/
 * Chapter: 滑动窗口
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
    int countCompleteSubstrings(string word, int k) {
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
        string word = "igigee";
        int k = 2;
        auto localResult = solution.countCompleteSubstrings(word, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "aaabbbccc";
        int k = 3;
        auto localResult = solution.countCompleteSubstrings(word, k);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
