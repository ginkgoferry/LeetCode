/*
 * Problem: 690. 员工的重要性 / Employee Importance
 * Link: https://leetcode.cn/problems/employee-importance/
 * Chapter: 树与回溯
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

class Employee {
public:
    int id = 0, importance = 0;
    vector<int> subordinates;
};

#endif

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        // TODO: 在这里实现你的解法。
        (void)employees;
        (void)id;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例：平台驱动接口。
        vector<Employee*> employees;
        {
            Employee* fresh = new Employee;
            fresh->id = 1; fresh->importance = 5;
            fresh->subordinates = {2, 3};
            employees.push_back(fresh);
        }
        {
            Employee* fresh = new Employee;
            fresh->id = 2; fresh->importance = 3;
            fresh->subordinates = {};
            employees.push_back(fresh);
        }
        {
            Employee* fresh = new Employee;
            fresh->id = 3; fresh->importance = 3;
            fresh->subordinates = {};
            employees.push_back(fresh);
        }
        auto localResult = solution.getImportance(employees, 1);
        assert(localResult == 11);
        for (Employee* allocated : employees) delete allocated;
    }

    {
        // 官方样例：平台驱动接口。
        vector<Employee*> employees;
        {
            Employee* fresh = new Employee;
            fresh->id = 1; fresh->importance = 2;
            fresh->subordinates = {5};
            employees.push_back(fresh);
        }
        {
            Employee* fresh = new Employee;
            fresh->id = 5; fresh->importance = -3;
            fresh->subordinates = {};
            employees.push_back(fresh);
        }
        auto localResult = solution.getImportance(employees, 5);
        assert(localResult == -3);
        for (Employee* allocated : employees) delete allocated;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
