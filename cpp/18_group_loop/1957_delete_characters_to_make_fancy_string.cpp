/*
 * Problem: 1957. 删除字符使字符串变好 / Delete Characters to Make Fancy String
 * Link: https://leetcode.cn/problems/delete-characters-to-make-fancy-string/
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
    string makeFancyString(string s) {
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
        string s = "leeetcode";
        auto localResult = solution.makeFancyString(s);
        string expected = "leetcode";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aaabaaaa";
        auto localResult = solution.makeFancyString(s);
        string expected = "aabaa";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aab";
        auto localResult = solution.makeFancyString(s);
        string expected = "aab";
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = "aaa";
        auto localResult = solution.makeFancyString(s);
        string expected = "aa";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
