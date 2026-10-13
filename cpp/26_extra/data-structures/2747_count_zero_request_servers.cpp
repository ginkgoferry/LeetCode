/*
 * Problem: 2747. 统计没有收到请求的服务器数目 / Count Zero Request Servers
 * Link: https://leetcode.cn/problems/count-zero-request-servers/
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
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)logs;
        (void)x;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> logs = {{1, 3}, {2, 6}, {1, 5}};
        int x = 5;
        vector<int> queries = {10, 11};
        auto localResult = solution.countServers(n, logs, x, queries);
        vector<int> expected = {1, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> logs = {{2, 4}, {2, 1}, {1, 2}, {3, 1}};
        int x = 2;
        vector<int> queries = {3, 4};
        auto localResult = solution.countServers(n, logs, x, queries);
        vector<int> expected = {0, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
