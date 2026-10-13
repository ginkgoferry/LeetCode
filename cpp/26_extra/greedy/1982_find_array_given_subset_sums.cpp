/*
 * Problem: 1982. 从子集的和还原数组 / Find Array Given Subset Sums
 * Link: https://leetcode.cn/problems/find-array-given-subset-sums/
 * Chapter: 贪心算法
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
    vector<int> recoverArray(int n, vector<int>& sums) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)sums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<int> sums = {-3, -2, -1, 0, 0, 1, 2, 3};
        const auto localOriginalSums = sums;
        auto localResult = solution.recoverArray(n, sums);
        assert(localResult.size() == static_cast<size_t>(n));
        vector<int> observed{0};
        for (int value : localResult) { size_t size = observed.size(); for (size_t i = 0; i < size; ++i) observed.push_back(observed[i] + value); }
        auto expected = localOriginalSums;
        sort(observed.begin(), observed.end()); sort(expected.begin(), expected.end());
        assert(observed == expected);
    }

    {
        // 官方样例
        int n = 2;
        vector<int> sums = {0, 0, 0, 0};
        const auto localOriginalSums = sums;
        auto localResult = solution.recoverArray(n, sums);
        assert(localResult.size() == static_cast<size_t>(n));
        vector<int> observed{0};
        for (int value : localResult) { size_t size = observed.size(); for (size_t i = 0; i < size; ++i) observed.push_back(observed[i] + value); }
        auto expected = localOriginalSums;
        sort(observed.begin(), observed.end()); sort(expected.begin(), expected.end());
        assert(observed == expected);
    }

    {
        // 官方样例
        int n = 4;
        vector<int> sums = {0, 0, 5, 5, 4, -1, 4, 9, 9, -1, 4, 3, 4, 8, 3, 8};
        const auto localOriginalSums = sums;
        auto localResult = solution.recoverArray(n, sums);
        assert(localResult.size() == static_cast<size_t>(n));
        vector<int> observed{0};
        for (int value : localResult) { size_t size = observed.size(); for (size_t i = 0; i < size; ++i) observed.push_back(observed[i] + value); }
        auto expected = localOriginalSums;
        sort(observed.begin(), observed.end()); sort(expected.begin(), expected.end());
        assert(observed == expected);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
