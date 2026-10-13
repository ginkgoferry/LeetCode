/*
 * Problem: 636. 函数的独占时间 / Exclusive Time of Functions
 * Link: https://leetcode.cn/problems/exclusive-time-of-functions/
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
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)logs;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        vector<string> logs = {"0:start:0", "1:start:2", "1:end:5", "0:end:6"};
        auto localResult = solution.exclusiveTime(n, logs);
        vector<int> expected = {3, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 1;
        vector<string> logs = {"0:start:0", "0:start:2", "0:end:5", "0:start:6", "0:end:6", "0:end:7"};
        auto localResult = solution.exclusiveTime(n, logs);
        vector<int> expected = {8};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        vector<string> logs = {"0:start:0", "0:start:2", "0:end:5", "1:start:6", "1:end:6", "0:end:7"};
        auto localResult = solution.exclusiveTime(n, logs);
        vector<int> expected = {7, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
