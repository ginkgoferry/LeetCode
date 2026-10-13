/*
 * Problem: 3575. 最大好子树分数 / Maximum Good Subtree Score
 * Link: https://leetcode.cn/problems/maximum-good-subtree-score/
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
    int goodSubtreeSum(vector<int>& vals, vector<int>& par) {
        // TODO: 在这里实现你的解法。
        (void)vals;
        (void)par;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> vals = {2, 3};
        vector<int> par = {-1, 0};
        auto localResult = solution.goodSubtreeSum(vals, par);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> vals = {1, 5, 2};
        vector<int> par = {-1, 0, 0};
        auto localResult = solution.goodSubtreeSum(vals, par);
        int expected = 15;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> vals = {34, 1, 2};
        vector<int> par = {-1, 0, 1};
        auto localResult = solution.goodSubtreeSum(vals, par);
        int expected = 42;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> vals = {3, 22, 5};
        vector<int> par = {-1, 0, 1};
        auto localResult = solution.goodSubtreeSum(vals, par);
        int expected = 18;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
