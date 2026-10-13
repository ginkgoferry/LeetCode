/*
 * Problem: 2606. 找到最大开销的子字符串 / Find the Substring With Maximum Cost
 * Link: https://leetcode.cn/problems/find-the-substring-with-maximum-cost/
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
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)chars;
        (void)vals;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "adaa";
        string chars = "d";
        vector<int> vals = {-1000};
        auto localResult = solution.maximumCostSubstring(s, chars, vals);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abc";
        string chars = "abc";
        vector<int> vals = {-1, -1, -1};
        auto localResult = solution.maximumCostSubstring(s, chars, vals);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
