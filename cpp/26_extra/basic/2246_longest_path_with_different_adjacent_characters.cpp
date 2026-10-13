/*
 * Problem: 2246. 相邻字符不同的最长路径 / Longest Path With Different Adjacent Characters
 * Link: https://leetcode.cn/problems/longest-path-with-different-adjacent-characters/
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
    int longestPath(vector<int>& parent, string s) {
        // TODO: 在这里实现你的解法。
        (void)parent;
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> parent = {-1, 0, 0, 1, 1, 2};
        string s = "abacbe";
        auto localResult = solution.longestPath(parent, s);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> parent = {-1, 0, 0, 0};
        string s = "aabc";
        auto localResult = solution.longestPath(parent, s);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
