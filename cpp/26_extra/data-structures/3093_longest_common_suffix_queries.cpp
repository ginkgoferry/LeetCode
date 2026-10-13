/*
 * Problem: 3093. 最长公共后缀查询 / Longest Common Suffix Queries
 * Link: https://leetcode.cn/problems/longest-common-suffix-queries/
 * Chapter: 数据结构
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
    vector<int> stringIndices(vector<string>& wordsContainer, vector<string>& wordsQuery) {
        // TODO: 在这里实现你的解法。
        (void)wordsContainer;
        (void)wordsQuery;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> wordsContainer = {"abcd", "bcd", "xbcd"};
        vector<string> wordsQuery = {"cd", "bcd", "xyz"};
        auto localResult = solution.stringIndices(wordsContainer, wordsQuery);
        vector<int> expected = {1, 1, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> wordsContainer = {"abcdefgh", "poiuygh", "ghghgh"};
        vector<string> wordsQuery = {"gh", "acbfgh", "acbfegh"};
        auto localResult = solution.stringIndices(wordsContainer, wordsQuery);
        vector<int> expected = {2, 0, 2};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
