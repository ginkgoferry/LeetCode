/*
 * Problem: 1733. 需要教语言的最少人数 / Minimum Number of People to Teach
 * Link: https://leetcode.cn/problems/minimum-number-of-people-to-teach/
 * Chapter: 贪心算法
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
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)languages;
        (void)friendships;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        vector<vector<int>> languages = {{1}, {2}, {1, 2}};
        vector<vector<int>> friendships = {{1, 2}, {1, 3}, {2, 3}};
        auto localResult = solution.minimumTeachings(n, languages, friendships);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> languages = {{2}, {1, 3}, {1, 2}, {3}};
        vector<vector<int>> friendships = {{1, 4}, {1, 2}, {3, 4}, {2, 3}};
        auto localResult = solution.minimumTeachings(n, languages, friendships);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
