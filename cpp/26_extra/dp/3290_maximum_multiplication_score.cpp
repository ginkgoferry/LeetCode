/*
 * Problem: 3290. 最高乘法得分 / Maximum Multiplication Score
 * Link: https://leetcode.cn/problems/maximum-multiplication-score/
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
    long long maxScore(vector<int>& a, vector<int>& b) {
        // TODO: 在这里实现你的解法。
        (void)a;
        (void)b;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> a = {3, 2, 5, 6};
        vector<int> b = {2, -6, 4, -5, -3, 2, -7};
        auto localResult = solution.maxScore(a, b);
        long long expected = 26LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> a = {-1, 4, 5, -2};
        vector<int> b = {-5, -1, -3, -2, -4};
        auto localResult = solution.maxScore(a, b);
        long long expected = -1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
