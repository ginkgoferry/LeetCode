/*
 * Problem: 3331. 修改后子树的大小 / Find Subtree Sizes After Changes
 * Link: https://leetcode.cn/problems/find-subtree-sizes-after-changes/
 * Chapter: 树与回溯
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
    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        // TODO: 在这里实现你的解法。
        (void)parent;
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> parent = {-1, 0, 0, 1, 1, 1};
        string s = "abaabc";
        auto localResult = solution.findSubtreeSizes(parent, s);
        vector<int> expected = {6, 3, 1, 1, 1, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> parent = {-1, 0, 4, 0, 1};
        string s = "abbba";
        auto localResult = solution.findSubtreeSizes(parent, s);
        vector<int> expected = {5, 2, 1, 1, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
