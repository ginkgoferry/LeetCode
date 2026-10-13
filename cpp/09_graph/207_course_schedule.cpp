/*
 * Problem: 207. 课程表 / Course Schedule
 * Link: https://leetcode.cn/problems/course-schedule/
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
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
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
        int numCourses = 2;
        vector<vector<int>> prerequisites = {{1, 0}};
        assert((solution.canFinish(numCourses, prerequisites) == true));
    }

    {
        int numCourses = 2;
        vector<vector<int>> prerequisites = {{1, 0}, {0, 1}};
        assert((solution.canFinish(numCourses, prerequisites) == false));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
