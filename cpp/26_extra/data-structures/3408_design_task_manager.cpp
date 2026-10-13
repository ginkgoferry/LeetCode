/*
 * Problem: 3408. 设计任务管理器 / Design Task Manager
 * Link: https://leetcode.cn/problems/design-task-manager/
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

class TaskManager {
public:
    TaskManager(vector<vector<int>>& tasks) {
        // TODO: 在这里实现你的解法。
        (void)tasks;
    }
    
    void add(int userId, int taskId, int priority) {
        // TODO: 在这里实现你的解法。
        (void)userId;
        (void)taskId;
        (void)priority;
    }
    
    void edit(int taskId, int newPriority) {
        // TODO: 在这里实现你的解法。
        (void)taskId;
        (void)newPriority;
    }
    
    void rmv(int taskId) {
        // TODO: 在这里实现你的解法。
        (void)taskId;
    }
    
    int execTop() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        vector<vector<int>> tasks = {{1, 101, 10}, {2, 102, 20}, {3, 103, 15}};
        TaskManager localObject(tasks);
        {
            int userId = 4;
            int taskId = 104;
            int priority = 5;
            localObject.add(userId, taskId, priority);
        }
        {
            int taskId = 102;
            int newPriority = 8;
            localObject.edit(taskId, newPriority);
        }
        {
            auto localResult = localObject.execTop();
            int expected = 3;
            assert((localResult == expected));
        }
        {
            int taskId = 101;
            localObject.rmv(taskId);
        }
        {
            int userId = 5;
            int taskId = 105;
            int priority = 15;
            localObject.add(userId, taskId, priority);
        }
        {
            auto localResult = localObject.execTop();
            int expected = 5;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
