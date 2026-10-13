/*
 * Problem: 210. 课程表 II / Course Schedule II
 * Link: https://leetcode.cn/problems/course-schedule-ii/
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
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        // TODO: 在这里实现你的解法。
        (void)numCourses;
        (void)prerequisites;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int numCourses = 2;
        vector<vector<int>> prerequisites = {{1, 0}};
        const auto localOriginalPrerequisites = prerequisites;
        auto localResult = solution.findOrder(numCourses, prerequisites);
        assert(localResult.size() == static_cast<size_t>(numCourses));
        vector<int> ranks(numCourses, -1);
        for (int i = 0; i < numCourses; ++i) {
            int course = localResult[i];
            assert(course >= 0 && course < numCourses && ranks[course] == -1);
            ranks[course] = i;
        }
        for (const auto& edge : localOriginalPrerequisites) assert(ranks[edge[1]] < ranks[edge[0]]);
    }

    {
        // 官方样例
        int numCourses = 4;
        vector<vector<int>> prerequisites = {{1, 0}, {2, 0}, {3, 1}, {3, 2}};
        const auto localOriginalPrerequisites = prerequisites;
        auto localResult = solution.findOrder(numCourses, prerequisites);
        assert(localResult.size() == static_cast<size_t>(numCourses));
        vector<int> ranks(numCourses, -1);
        for (int i = 0; i < numCourses; ++i) {
            int course = localResult[i];
            assert(course >= 0 && course < numCourses && ranks[course] == -1);
            ranks[course] = i;
        }
        for (const auto& edge : localOriginalPrerequisites) assert(ranks[edge[1]] < ranks[edge[0]]);
    }

    {
        // 官方样例
        int numCourses = 1;
        vector<vector<int>> prerequisites = {};
        const auto localOriginalPrerequisites = prerequisites;
        auto localResult = solution.findOrder(numCourses, prerequisites);
        assert(localResult.size() == static_cast<size_t>(numCourses));
        vector<int> ranks(numCourses, -1);
        for (int i = 0; i < numCourses; ++i) {
            int course = localResult[i];
            assert(course >= 0 && course < numCourses && ranks[course] == -1);
            ranks[course] = i;
        }
        for (const auto& edge : localOriginalPrerequisites) assert(ranks[edge[1]] < ranks[edge[0]]);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
