/*
 * Problem: 1882. 使用服务器处理任务 / Process Tasks Using Servers
 * Link: https://leetcode.cn/problems/process-tasks-using-servers/
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
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        // TODO: 在这里实现你的解法。
        (void)servers;
        (void)tasks;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> servers = {3, 3, 2};
        vector<int> tasks = {1, 2, 3, 2, 1, 2};
        auto localResult = solution.assignTasks(servers, tasks);
        vector<int> expected = {2, 2, 0, 2, 1, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> servers = {5, 1, 4, 3, 2};
        vector<int> tasks = {2, 1, 2, 4, 5, 2, 1};
        auto localResult = solution.assignTasks(servers, tasks);
        vector<int> expected = {1, 4, 1, 4, 1, 3, 2};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
