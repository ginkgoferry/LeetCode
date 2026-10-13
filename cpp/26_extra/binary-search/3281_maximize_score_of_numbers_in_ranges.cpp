/*
 * Problem: 3281. 范围内整数的最大得分 / Maximize Score of Numbers in Ranges
 * Link: https://leetcode.cn/problems/maximize-score-of-numbers-in-ranges/
 * Chapter: 二分查找
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
    int maxPossibleScore(vector<int>& start, int d) {
        // TODO: 在这里实现你的解法。
        (void)start;
        (void)d;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> start = {6, 0, 3};
        int d = 2;
        auto localResult = solution.maxPossibleScore(start, d);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> start = {2, 6, 13, 13};
        int d = 5;
        auto localResult = solution.maxPossibleScore(start, d);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
