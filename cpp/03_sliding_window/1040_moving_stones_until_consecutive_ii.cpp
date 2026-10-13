/*
 * Problem: 1040. 移动石子直到连续 II / Moving Stones Until Consecutive II
 * Link: https://leetcode.cn/problems/moving-stones-until-consecutive-ii/
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
    vector<int> numMovesStonesII(vector<int>& stones) {
        // TODO: 在这里实现你的解法。
        (void)stones;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> stones = {7, 4, 9};
        auto localResult = solution.numMovesStonesII(stones);
        vector<int> expected = {1, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> stones = {6, 5, 4, 3, 10};
        auto localResult = solution.numMovesStonesII(stones);
        vector<int> expected = {2, 3};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
