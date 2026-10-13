/*
 * Problem: 3310. 移除可疑的方法 / Remove Methods From Project
 * Link: https://leetcode.cn/problems/remove-methods-from-project/
 * Chapter: 图论
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
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)k;
        (void)invocations;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        int k = 1;
        vector<vector<int>> invocations = {{1, 2}, {0, 1}, {3, 2}};
        auto localResult = solution.remainingMethods(n, k, invocations);
        vector<int> expected = {0, 1, 2, 3};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int k = 0;
        vector<vector<int>> invocations = {{1, 2}, {0, 2}, {0, 1}, {3, 4}};
        auto localResult = solution.remainingMethods(n, k, invocations);
        vector<int> expected = {3, 4};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        int k = 2;
        vector<vector<int>> invocations = {{1, 2}, {0, 1}, {2, 0}};
        auto localResult = solution.remainingMethods(n, k, invocations);
        vector<int> expected = {};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
