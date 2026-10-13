/*
 * Problem: 1834. 单线程 CPU / Single-Threaded CPU
 * Link: https://leetcode.cn/problems/single-threaded-cpu/
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
    vector<int> getOrder(vector<vector<int>>& tasks) {
        // TODO: 在这里实现你的解法。
        (void)tasks;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> tasks = {{1, 2}, {2, 4}, {3, 2}, {4, 1}};
        auto localResult = solution.getOrder(tasks);
        vector<int> expected = {0, 2, 3, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> tasks = {{7, 10}, {7, 12}, {7, 5}, {7, 4}, {7, 2}};
        auto localResult = solution.getOrder(tasks);
        vector<int> expected = {4, 3, 2, 0, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
