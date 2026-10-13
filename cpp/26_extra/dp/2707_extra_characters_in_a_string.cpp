/*
 * Problem: 2707. 字符串中的额外字符 / Extra Characters in a String
 * Link: https://leetcode.cn/problems/extra-characters-in-a-string/
 * Chapter: 动态规划
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
    int minExtraChar(string s, vector<string>& dictionary) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)dictionary;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "leetscode";
        vector<string> dictionary = {"leet", "code", "leetcode"};
        auto localResult = solution.minExtraChar(s, dictionary);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "sayhelloworld";
        vector<string> dictionary = {"hello", "world"};
        auto localResult = solution.minExtraChar(s, dictionary);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
