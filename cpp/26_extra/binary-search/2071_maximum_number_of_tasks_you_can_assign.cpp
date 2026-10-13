/*
 * Problem: 2071. 你可以安排的最多任务数目 / Maximum Number of Tasks You Can Assign
 * Link: https://leetcode.cn/problems/maximum-number-of-tasks-you-can-assign/
 * Chapter: 二分查找
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
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        // TODO: 在这里实现你的解法。
        (void)tasks;
        (void)workers;
        (void)pills;
        (void)strength;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> tasks = {3, 2, 1};
        vector<int> workers = {0, 3, 3};
        int pills = 1;
        int strength = 1;
        auto localResult = solution.maxTaskAssign(tasks, workers, pills, strength);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> tasks = {5, 4};
        vector<int> workers = {0, 0, 0};
        int pills = 1;
        int strength = 5;
        auto localResult = solution.maxTaskAssign(tasks, workers, pills, strength);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> tasks = {10, 15, 30};
        vector<int> workers = {0, 10, 10, 10, 10};
        int pills = 3;
        int strength = 10;
        auto localResult = solution.maxTaskAssign(tasks, workers, pills, strength);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> tasks = {5, 9, 8, 5, 9};
        vector<int> workers = {1, 6, 4, 2, 6};
        int pills = 1;
        int strength = 5;
        auto localResult = solution.maxTaskAssign(tasks, workers, pills, strength);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
