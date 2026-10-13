/*
 * Problem: LCP 74. 最强祝福力场 / 最强祝福力场
 * Link: https://leetcode.cn/problems/xepqZ5/
 * Chapter: 数据结构
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
    int fieldOfGreatestBlessing(vector<vector<int>>& forceField) {
        // TODO: 在这里实现你的解法。
        (void)forceField;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> forceField = {{0, 0, 1}, {1, 0, 1}};
        auto localResult = solution.fieldOfGreatestBlessing(forceField);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> forceField = {{4, 4, 6}, {7, 5, 3}, {1, 6, 2}, {5, 6, 3}};
        auto localResult = solution.fieldOfGreatestBlessing(forceField);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
