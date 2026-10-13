/*
 * Problem: 470. 用 Rand7() 实现 Rand10() / Implement Rand10() Using Rand7()
 * Link: https://leetcode.cn/problems/implement-rand10-using-rand7/
 * Chapter: 数学
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
#include <random>
// LOCAL 平台接口模拟，不属于 rand10 的解法。
inline int rand7() {
    static mt19937 engine(7);
    return uniform_int_distribution<int>(1, 7)(engine);
}
#endif

class Solution {
public:
    int rand10() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 1;
        // n 是本地调用次数，平台 API rand10() 不接收参数。
        vector<int> localResult;
        for (int sample = 0; sample < n; ++sample) localResult.push_back(solution.rand10());
        assert(localResult.size() == static_cast<size_t>(n));
        for (int value : localResult) assert(value >= 1 && value <= 10);
    }

    {
        // 官方样例
        int n = 2;
        // n 是本地调用次数，平台 API rand10() 不接收参数。
        vector<int> localResult;
        for (int sample = 0; sample < n; ++sample) localResult.push_back(solution.rand10());
        assert(localResult.size() == static_cast<size_t>(n));
        for (int value : localResult) assert(value >= 1 && value <= 10);
    }

    {
        // 官方样例
        int n = 3;
        // n 是本地调用次数，平台 API rand10() 不接收参数。
        vector<int> localResult;
        for (int sample = 0; sample < n; ++sample) localResult.push_back(solution.rand10());
        assert(localResult.size() == static_cast<size_t>(n));
        for (int value : localResult) assert(value >= 1 && value <= 10);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
