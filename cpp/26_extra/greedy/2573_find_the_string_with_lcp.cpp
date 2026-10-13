/*
 * Problem: 2573. 找出对应 LCP 矩阵的字符串 / Find the String with LCP
 * Link: https://leetcode.cn/problems/find-the-string-with-lcp/
 * Chapter: 贪心算法
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
    string findTheString(vector<vector<int>>& lcp) {
        // TODO: 在这里实现你的解法。
        (void)lcp;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> lcp = {{4, 0, 2, 0}, {0, 3, 0, 1}, {2, 0, 2, 0}, {0, 1, 0, 1}};
        auto localResult = solution.findTheString(lcp);
        string expected = "abab";
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> lcp = {{4, 3, 2, 1}, {3, 3, 2, 1}, {2, 2, 2, 1}, {1, 1, 1, 1}};
        auto localResult = solution.findTheString(lcp);
        string expected = "aaaa";
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> lcp = {{4, 3, 2, 1}, {3, 3, 2, 1}, {2, 2, 2, 1}, {1, 1, 1, 3}};
        auto localResult = solution.findTheString(lcp);
        string expected = "";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
