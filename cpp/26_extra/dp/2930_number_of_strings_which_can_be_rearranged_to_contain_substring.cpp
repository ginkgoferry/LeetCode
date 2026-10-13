/*
 * Problem: 2930. 重新排列后包含指定子字符串的字符串数目 / Number of Strings Which Can Be Rearranged to Contain Substring
 * Link: https://leetcode.cn/problems/number-of-strings-which-can-be-rearranged-to-contain-substring/
 * Chapter: 动态规划
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
    int stringCount(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        auto localResult = solution.stringCount(n);
        int expected = 12;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 10;
        auto localResult = solution.stringCount(n);
        int expected = 83943898;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
