/*
 * Problem: 2003. 每棵子树内缺失的最小基因值 / Smallest Missing Genetic Value in Each Subtree
 * Link: https://leetcode.cn/problems/smallest-missing-genetic-value-in-each-subtree/
 * Chapter: 树与回溯
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
    vector<int> smallestMissingValueSubtree(vector<int>& parents, vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)parents;
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> parents = {-1, 0, 0, 2};
        vector<int> nums = {1, 2, 3, 4};
        auto localResult = solution.smallestMissingValueSubtree(parents, nums);
        vector<int> expected = {5, 1, 1, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> parents = {-1, 0, 1, 0, 3, 3};
        vector<int> nums = {5, 4, 6, 2, 1, 3};
        auto localResult = solution.smallestMissingValueSubtree(parents, nums);
        vector<int> expected = {7, 1, 1, 4, 2, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> parents = {-1, 2, 3, 0, 2, 4, 1};
        vector<int> nums = {2, 3, 4, 5, 6, 7, 8};
        auto localResult = solution.smallestMissingValueSubtree(parents, nums);
        vector<int> expected = {1, 1, 1, 1, 1, 1, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
