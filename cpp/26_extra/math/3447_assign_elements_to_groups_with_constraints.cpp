/*
 * Problem: 3447. 将元素分配给有约束条件的组 / Assign Elements to Groups with Constraints
 * Link: https://leetcode.cn/problems/assign-elements-to-groups-with-constraints/
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
#endif

class Solution {
public:
    vector<int> assignElements(vector<int>& groups, vector<int>& elements) {
        // TODO: 在这里实现你的解法。
        (void)groups;
        (void)elements;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> groups = {8, 4, 3, 2, 4};
        vector<int> elements = {4, 2};
        auto localResult = solution.assignElements(groups, elements);
        vector<int> expected = {0, 0, -1, 1, 0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> groups = {2, 3, 5, 7};
        vector<int> elements = {5, 3, 3};
        auto localResult = solution.assignElements(groups, elements);
        vector<int> expected = {-1, 1, 0, -1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> groups = {10, 21, 30, 41};
        vector<int> elements = {2, 1};
        auto localResult = solution.assignElements(groups, elements);
        vector<int> expected = {0, 1, 0, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
