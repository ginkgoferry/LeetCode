/*
 * Problem: 354. 俄罗斯套娃信封问题 / Russian Doll Envelopes
 * Link: https://leetcode.cn/problems/russian-doll-envelopes/
 * Chapter: 动态规划
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
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        // TODO: 在这里实现你的解法。
        (void)envelopes;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> envelopes = {{5, 4}, {6, 4}, {6, 7}, {2, 3}};
        auto localResult = solution.maxEnvelopes(envelopes);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> envelopes = {{1, 1}, {1, 1}, {1, 1}};
        auto localResult = solution.maxEnvelopes(envelopes);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
