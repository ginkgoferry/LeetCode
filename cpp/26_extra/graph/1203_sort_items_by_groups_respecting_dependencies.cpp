/*
 * Problem: 1203. 项目管理 / Sort Items by Groups Respecting Dependencies
 * Link: https://leetcode.cn/problems/sort-items-by-groups-respecting-dependencies/
 * Chapter: 图论
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
    vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& beforeItems) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)m;
        (void)group;
        (void)beforeItems;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 8;
        int m = 2;
        vector<int> group = {-1, -1, 1, 0, 0, 1, 0, -1};
        vector<vector<int>> beforeItems = {{}, {6}, {5}, {6}, {3, 6}, {}, {}, {}};
        const auto localOriginalGroup = group;
        const auto localOriginalDependencies = beforeItems;
        auto localResult = solution.sortItems(n, m, group, beforeItems);
        assert(localResult.size() == static_cast<size_t>(n));
        vector<int> ranks(n, -1), first(m, n), last(m, -1), counts(m, 0);
        for (int i = 0; i < n; ++i) {
            int item = localResult[i];
            assert(item >= 0 && item < n && ranks[item] == -1); ranks[item] = i;
            int g = localOriginalGroup[item];
            if (g >= 0) { first[g] = min(first[g], i); last[g] = max(last[g], i); ++counts[g]; }
        }
        for (int item = 0; item < n; ++item)
            for (int before : localOriginalDependencies[item]) assert(ranks[before] < ranks[item]);
        for (int g = 0; g < m; ++g) if (counts[g]) assert(last[g] - first[g] + 1 == counts[g]);
    }

    {
        // 官方样例
        int n = 8;
        int m = 2;
        vector<int> group = {-1, -1, 1, 0, 0, 1, 0, -1};
        vector<vector<int>> beforeItems = {{}, {6}, {5}, {6}, {3}, {}, {4}, {}};
        const auto localOriginalGroup = group;
        const auto localOriginalDependencies = beforeItems;
        auto localResult = solution.sortItems(n, m, group, beforeItems);
        assert(localResult.empty());
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
