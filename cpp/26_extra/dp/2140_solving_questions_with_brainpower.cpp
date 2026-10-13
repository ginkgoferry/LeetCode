/*
 * Problem: 2140. 解决智力问题 / Solving Questions With Brainpower
 * Link: https://leetcode.cn/problems/solving-questions-with-brainpower/
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
    long long mostPoints(vector<vector<int>>& questions) {
        // TODO: 在这里实现你的解法。
        (void)questions;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> questions = {{3, 2}, {4, 3}, {4, 4}, {2, 5}};
        auto localResult = solution.mostPoints(questions);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> questions = {{1, 1}, {2, 2}, {3, 3}, {4, 4}, {5, 5}};
        auto localResult = solution.mostPoints(questions);
        long long expected = 7LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
