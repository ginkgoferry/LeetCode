/*
 * Problem: 886. 可能的二分法 / Possible Bipartition
 * Link: https://leetcode.cn/problems/possible-bipartition/
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
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)dislikes;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> dislikes = {{1, 2}, {1, 3}, {2, 4}};
        auto localResult = solution.possibleBipartition(n, dislikes);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> dislikes = {{1, 2}, {1, 3}, {2, 3}};
        auto localResult = solution.possibleBipartition(n, dislikes);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> dislikes = {{1, 2}, {2, 3}, {3, 4}, {4, 5}, {1, 5}};
        auto localResult = solution.possibleBipartition(n, dislikes);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
