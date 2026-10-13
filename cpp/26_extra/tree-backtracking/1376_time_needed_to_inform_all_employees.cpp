/*
 * Problem: 1376. 通知所有员工所需的时间 / Time Needed to Inform All Employees
 * Link: https://leetcode.cn/problems/time-needed-to-inform-all-employees/
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
#endif

class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)headID;
        (void)manager;
        (void)informTime;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 1;
        int headID = 0;
        vector<int> manager = {-1};
        vector<int> informTime = {0};
        auto localResult = solution.numOfMinutes(n, headID, manager, informTime);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 6;
        int headID = 2;
        vector<int> manager = {2, 2, -1, 2, 2, 2};
        vector<int> informTime = {0, 0, 1, 0, 0, 0};
        auto localResult = solution.numOfMinutes(n, headID, manager, informTime);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
