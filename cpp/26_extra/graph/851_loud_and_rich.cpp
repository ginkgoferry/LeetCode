/*
 * Problem: 851. 喧闹和富有 / Loud and Rich
 * Link: https://leetcode.cn/problems/loud-and-rich/
 * Chapter: 图论
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
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        // TODO: 在这里实现你的解法。
        (void)richer;
        (void)quiet;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> richer = {{1, 0}, {2, 1}, {3, 1}, {3, 7}, {4, 3}, {5, 3}, {6, 3}};
        vector<int> quiet = {3, 2, 5, 4, 6, 1, 7, 0};
        auto localResult = solution.loudAndRich(richer, quiet);
        vector<int> expected = {5, 5, 2, 5, 4, 5, 6, 7};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> richer = {};
        vector<int> quiet = {0};
        auto localResult = solution.loudAndRich(richer, quiet);
        vector<int> expected = {0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
