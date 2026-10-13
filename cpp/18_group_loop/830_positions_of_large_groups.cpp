/*
 * Problem: 830. 较大分组的位置 / Positions of Large Groups
 * Link: https://leetcode.cn/problems/positions-of-large-groups/
 * Chapter: 分组循环
 * Difficulty: Easy
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
    vector<vector<int>> largeGroupPositions(string s) {
        // TODO: 在这里实现你的解法。
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abbxxxxzzy";
        auto localResult = solution.largeGroupPositions(s);
        vector<vector<int>> expected = {{3, 6}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abc";
        auto localResult = solution.largeGroupPositions(s);
        vector<vector<int>> expected = {};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcdddeeeeaabbbcd";
        auto localResult = solution.largeGroupPositions(s);
        vector<vector<int>> expected = {{3, 5}, {6, 9}, {12, 14}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aba";
        auto localResult = solution.largeGroupPositions(s);
        vector<vector<int>> expected = {};
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = "aaa";
        auto localResult = solution.largeGroupPositions(s);
        vector<vector<int>> expected = {{0, 2}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
