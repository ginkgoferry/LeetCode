/*
 * Problem: 2516. 每种字符至少取 K 个 / Take K of Each Character From Left and Right
 * Link: https://leetcode.cn/problems/take-k-of-each-character-from-left-and-right/
 * Chapter: 滑动窗口
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
    int takeCharacters(string s, int k) {
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
        string s = "aabaaaacaabc";
        int k = 2;
        auto localResult = solution.takeCharacters(s, k);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "a";
        int k = 1;
        auto localResult = solution.takeCharacters(s, k);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
