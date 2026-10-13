/*
 * Problem: 1606. 找到处理最多请求的服务器 / Find Servers That Handled Most Number of Requests
 * Link: https://leetcode.cn/problems/find-servers-that-handled-most-number-of-requests/
 * Chapter: 数据结构
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
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        // TODO: 在这里实现你的解法。
        (void)k;
        (void)arrival;
        (void)load;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int k = 3;
        vector<int> arrival = {1, 2, 3, 4, 5};
        vector<int> load = {5, 2, 3, 3, 3};
        auto localResult = solution.busiestServers(k, arrival, load);
        vector<int> expected = {1};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 3;
        vector<int> arrival = {1, 2, 3, 4};
        vector<int> load = {1, 2, 1, 2};
        auto localResult = solution.busiestServers(k, arrival, load);
        vector<int> expected = {0};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 3;
        vector<int> arrival = {1, 2, 3};
        vector<int> load = {10, 12, 11};
        auto localResult = solution.busiestServers(k, arrival, load);
        vector<int> expected = {0, 1, 2};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 3;
        vector<int> arrival = {1, 2, 3, 4, 8, 9, 10};
        vector<int> load = {5, 2, 10, 3, 1, 2, 2};
        auto localResult = solution.busiestServers(k, arrival, load);
        vector<int> expected = {1};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 1;
        vector<int> arrival = {1};
        vector<int> load = {1};
        auto localResult = solution.busiestServers(k, arrival, load);
        vector<int> expected = {0};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
