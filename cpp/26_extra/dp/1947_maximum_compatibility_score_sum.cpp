/*
 * Problem: 1947. 最大兼容性评分和 / Maximum Compatibility Score Sum
 * Link: https://leetcode.cn/problems/maximum-compatibility-score-sum/
 * Chapter: 图论
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
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
        // TODO: 在这里实现你的解法。
        (void)students;
        (void)mentors;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> students = {{1, 1, 0}, {1, 0, 1}, {0, 0, 1}};
        vector<vector<int>> mentors = {{1, 0, 0}, {0, 0, 1}, {1, 1, 0}};
        auto localResult = solution.maxCompatibilitySum(students, mentors);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> students = {{0, 0}, {0, 0}, {0, 0}};
        vector<vector<int>> mentors = {{1, 1}, {1, 1}, {1, 1}};
        auto localResult = solution.maxCompatibilitySum(students, mentors);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
