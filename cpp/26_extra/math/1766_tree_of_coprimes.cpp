/*
 * Problem: 1766. 互质树 / Tree of Coprimes
 * Link: https://leetcode.cn/problems/tree-of-coprimes/
 * Chapter: 数学
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
    vector<int> getCoprimes(vector<int>& nums, vector<vector<int>>& edges) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)edges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 3, 3, 2};
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {1, 3}};
        auto localResult = solution.getCoprimes(nums, edges);
        vector<int> expected = {-1, 0, 0, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 6, 10, 2, 3, 6, 15};
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}};
        auto localResult = solution.getCoprimes(nums, edges);
        vector<int> expected = {-1, 0, -1, 0, 0, 0, -1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
