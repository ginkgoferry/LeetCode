/*
 * Problem: 3081. 替换字符串中的问号使分数最小 / Replace Question Marks in String to Minimize Its Value
 * Link: https://leetcode.cn/problems/replace-question-marks-in-string-to-minimize-its-value/
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
    string minimizeStringValue(string s) {
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
        string s = "???";
        auto localResult = solution.minimizeStringValue(s);
        string expected = "abc";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "a?a?";
        auto localResult = solution.minimizeStringValue(s);
        string expected = "abac";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
