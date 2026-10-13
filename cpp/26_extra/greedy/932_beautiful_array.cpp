/*
 * Problem: 932. 漂亮数组 / Beautiful Array
 * Link: https://leetcode.cn/problems/beautiful-array/
 * Chapter: 贪心算法
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
    vector<int> beautifulArray(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        auto localResult = solution.beautifulArray(n);
        assert(localResult.size() == static_cast<size_t>(n));
        set<int> values;
        for (int value : localResult) { assert(value >= 1 && value < static_cast<int>(localResult.size()) + 1); assert(values.insert(value).second); }
        vector<int> position(n + 1);
        for (int i = 0; i < n; ++i) position[localResult[i]] = i;
        for (int i = 0; i < n; ++i) for (int j = i + 1; j < n; ++j) {
            int sum = localResult[i] + localResult[j];
            if (sum % 2 == 0) assert(position[sum / 2] < i || position[sum / 2] > j);
        }
    }

    {
        // 官方样例
        int n = 5;
        auto localResult = solution.beautifulArray(n);
        assert(localResult.size() == static_cast<size_t>(n));
        set<int> values;
        for (int value : localResult) { assert(value >= 1 && value < static_cast<int>(localResult.size()) + 1); assert(values.insert(value).second); }
        vector<int> position(n + 1);
        for (int i = 0; i < n; ++i) position[localResult[i]] = i;
        for (int i = 0; i < n; ++i) for (int j = i + 1; j < n; ++j) {
            int sum = localResult[i] + localResult[j];
            if (sum % 2 == 0) assert(position[sum / 2] < i || position[sum / 2] > j);
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
