/*
 * Problem: 2381. 字母移位 II / Shifting Letters II
 * Link: https://leetcode.cn/problems/shifting-letters-ii/
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
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)shifts;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abc";
        vector<vector<int>> shifts = {{0, 1, 0}, {1, 2, 1}, {0, 2, 1}};
        auto localResult = solution.shiftingLetters(s, shifts);
        string expected = "ace";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "dztz";
        vector<vector<int>> shifts = {{0, 0, 0}, {1, 1, 1}};
        auto localResult = solution.shiftingLetters(s, shifts);
        string expected = "catz";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
