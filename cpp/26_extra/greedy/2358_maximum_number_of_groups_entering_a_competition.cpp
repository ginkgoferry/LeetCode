/*
 * Problem: 2358. 分组的最大数量 / Maximum Number of Groups Entering a Competition
 * Link: https://leetcode.cn/problems/maximum-number-of-groups-entering-a-competition/
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
    int maximumGroups(vector<int>& grades) {
        // TODO: 在这里实现你的解法。
        (void)grades;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> grades = {10, 6, 12, 7, 3, 5};
        auto localResult = solution.maximumGroups(grades);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> grades = {8, 8};
        auto localResult = solution.maximumGroups(grades);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
