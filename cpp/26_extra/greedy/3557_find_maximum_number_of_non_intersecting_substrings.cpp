/*
 * Problem: 3557. 不相交子字符串的最大数量 / Find Maximum Number of Non Intersecting Substrings
 * Link: https://leetcode.cn/problems/find-maximum-number-of-non-intersecting-substrings/
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
    int maxSubstrings(string word) {
        // TODO: 在这里实现你的解法。
        (void)word;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word = "abcdeafdef";
        auto localResult = solution.maxSubstrings(word);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "bcdaaaab";
        auto localResult = solution.maxSubstrings(word);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
