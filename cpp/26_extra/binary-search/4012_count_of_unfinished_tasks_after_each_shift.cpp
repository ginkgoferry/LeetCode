/*
 * Problem: 4012. 统计每个班次结束后的未完成任务数 / Count of Unfinished Tasks After Each Shift
 * Link: https://leetcode.cn/problems/count-of-unfinished-tasks-after-each-shift/
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
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        // TODO: 在这里实现你的解法。
        (void)tasks;
        (void)shifts;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> tasks = {1, 4, 4};
        vector<int> shifts = {9, 1, 4};
        auto localResult = solution.countTasks(tasks, shifts);
        vector<int> expected = {0, 2, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> tasks = {2, 3, 4};
        vector<int> shifts = {20, 4, 5};
        auto localResult = solution.countTasks(tasks, shifts);
        vector<int> expected = {0, 2, 0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> tasks = {4, 2};
        vector<int> shifts = {3, 6, 1};
        auto localResult = solution.countTasks(tasks, shifts);
        vector<int> expected = {2, 0, 2};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
