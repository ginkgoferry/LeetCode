/*
 * Problem: 1503. 所有蚂蚁掉下来前的最后一刻 / Last Moment Before All Ants Fall Out of a Plank
 * Link: https://leetcode.cn/problems/last-moment-before-all-ants-fall-out-of-a-plank/
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
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)left;
        (void)right;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        vector<int> left = {4, 3};
        vector<int> right = {0, 1};
        auto localResult = solution.getLastMoment(n, left, right);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 7;
        vector<int> left = {};
        vector<int> right = {0, 1, 2, 3, 4, 5, 6, 7};
        auto localResult = solution.getLastMoment(n, left, right);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 7;
        vector<int> left = {0, 1, 2, 3, 4, 5, 6, 7};
        vector<int> right = {};
        auto localResult = solution.getLastMoment(n, left, right);
        int expected = 7;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
