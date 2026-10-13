/*
 * Problem: 3493. 属性图 / Properties Graph
 * Link: https://leetcode.cn/problems/properties-graph/
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
    int numberOfComponents(vector<vector<int>>& properties, int k) {
        // TODO: 在这里实现你的解法。
        (void)properties;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> properties = {{1, 2}, {1, 1}, {3, 4}, {4, 5}, {5, 6}, {7, 7}};
        int k = 1;
        auto localResult = solution.numberOfComponents(properties, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> properties = {{1, 2, 3}, {2, 3, 4}, {4, 3, 5}};
        int k = 2;
        auto localResult = solution.numberOfComponents(properties, k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> properties = {{1, 1}, {1, 1}};
        int k = 2;
        auto localResult = solution.numberOfComponents(properties, k);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
