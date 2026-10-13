/*
 * Problem: 3999. 字符串变换后的最少分组数 / Minimum Number of String Groups Through Transformations
 * Link: https://leetcode.cn/problems/minimum-number-of-string-groups-through-transformations/
 * Chapter: 字符串
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
    int minimumGroups(vector<string>& words) {
        // TODO: 在这里实现你的解法。
        (void)words;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> words = {"ntgwz", "zwntg"};
        auto localResult = solution.minimumGroups(words);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"abc", "cab", "bac", "acb", "bca", "cba"};
        auto localResult = solution.minimumGroups(words);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"leet", "abb", "bab", "deed", "edde", "code", "bba"};
        auto localResult = solution.minimumGroups(words);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
