/*
 * Problem: 1092. 最短公共超序列 / Shortest Common Supersequence
 * Link: https://leetcode.cn/problems/shortest-common-supersequence/
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
    string shortestCommonSupersequence(string str1, string str2) {
        // TODO: 在这里实现你的解法。
        (void)str1;
        (void)str2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string str1 = "abac";
        string str2 = "cab";
        const auto localOriginalFirst = str1;
        const auto localOriginalSecond = str2;
        auto localResult = solution.shortestCommonSupersequence(str1, str2);
        assert(localResult.size() == 5);
        for (const string& target : {localOriginalFirst, localOriginalSecond}) {
            size_t position = 0;
            for (char ch : localResult) if (position < target.size() && target[position] == ch) ++position;
            assert(position == target.size());
        }
    }

    {
        // 官方样例
        string str1 = "aaaaaaaa";
        string str2 = "aaaaaaaa";
        const auto localOriginalFirst = str1;
        const auto localOriginalSecond = str2;
        auto localResult = solution.shortestCommonSupersequence(str1, str2);
        assert(localResult.size() == 8);
        for (const string& target : {localOriginalFirst, localOriginalSecond}) {
            size_t position = 0;
            for (char ch : localResult) if (position < target.size() && target[position] == ch) ++position;
            assert(position == target.size());
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
