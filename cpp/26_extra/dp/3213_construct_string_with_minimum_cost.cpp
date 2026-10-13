/*
 * Problem: 3213. 最小代价构造字符串 / Construct String with Minimum Cost
 * Link: https://leetcode.cn/problems/construct-string-with-minimum-cost/
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
    int minimumCost(string target, vector<string>& words, vector<int>& costs) {
        // TODO: 在这里实现你的解法。
        (void)target;
        (void)words;
        (void)costs;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string target = "abcdef";
        vector<string> words = {"abdef", "abc", "d", "def", "ef"};
        vector<int> costs = {100, 1, 1, 10, 5};
        auto localResult = solution.minimumCost(target, words, costs);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string target = "aaaa";
        vector<string> words = {"z", "zz", "zzz"};
        vector<int> costs = {1, 10, 100};
        auto localResult = solution.minimumCost(target, words, costs);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
