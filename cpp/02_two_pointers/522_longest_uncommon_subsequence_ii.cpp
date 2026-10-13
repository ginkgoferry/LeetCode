/*
 * Problem: 522. 最长特殊序列 II / Longest Uncommon Subsequence II
 * Link: https://leetcode.cn/problems/longest-uncommon-subsequence-ii/
 * Chapter: 双指针
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
    int findLUSlength(vector<string>& strs) {
        // TODO: 在这里实现你的解法。
        (void)strs;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> strs = {"aba", "cdc", "eae"};
        auto localResult = solution.findLUSlength(strs);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> strs = {"aaa", "aaa", "aa"};
        auto localResult = solution.findLUSlength(strs);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<string> strs = {"a", "a"};
        auto localResult = solution.findLUSlength(strs);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
