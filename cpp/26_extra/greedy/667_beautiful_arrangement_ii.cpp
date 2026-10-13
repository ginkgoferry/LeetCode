/*
 * Problem: 667. 优美的排列 II / Beautiful Arrangement II
 * Link: https://leetcode.cn/problems/beautiful-arrangement-ii/
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
    vector<int> constructArray(int n, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        int k = 1;
        auto localResult = solution.constructArray(n, k);
        assert(localResult.size() == static_cast<size_t>(n));
        set<int> values;
        for (int value : localResult) { assert(value >= 1 && value < static_cast<int>(localResult.size()) + 1); assert(values.insert(value).second); }
        set<int> differences;
        for (size_t i = 1; i < localResult.size(); ++i) differences.insert(abs(localResult[i] - localResult[i-1]));
        assert(differences.size() == static_cast<size_t>(k));
    }

    {
        // 官方样例
        int n = 3;
        int k = 2;
        auto localResult = solution.constructArray(n, k);
        assert(localResult.size() == static_cast<size_t>(n));
        set<int> values;
        for (int value : localResult) { assert(value >= 1 && value < static_cast<int>(localResult.size()) + 1); assert(values.insert(value).second); }
        set<int> differences;
        for (size_t i = 1; i < localResult.size(); ++i) differences.insert(abs(localResult[i] - localResult[i-1]));
        assert(differences.size() == static_cast<size_t>(k));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
