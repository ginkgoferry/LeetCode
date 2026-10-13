/*
 * Problem: 2109. 向字符串添加空格 / Adding Spaces to a String
 * Link: https://leetcode.cn/problems/adding-spaces-to-a-string/
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
    string addSpaces(string s, vector<int>& spaces) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)spaces;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "LeetcodeHelpsMeLearn";
        vector<int> spaces = {8, 13, 15};
        auto localResult = solution.addSpaces(s, spaces);
        string expected = "Leetcode Helps Me Learn";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "icodeinpython";
        vector<int> spaces = {1, 5, 7, 9};
        auto localResult = solution.addSpaces(s, spaces);
        string expected = "i code in py thon";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "spacing";
        vector<int> spaces = {0, 1, 2, 3, 4, 5, 6};
        auto localResult = solution.addSpaces(s, spaces);
        string expected = " s p a c i n g";
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = "a";
        vector<int> spaces = {0};
        auto localResult = solution.addSpaces(s, spaces);
        string expected = " a";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
