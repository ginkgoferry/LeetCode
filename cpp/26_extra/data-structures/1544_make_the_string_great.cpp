/*
 * Problem: 1544. 整理字符串 / Make The String Great
 * Link: https://leetcode.cn/problems/make-the-string-great/
 * Chapter: 数据结构
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
    string makeGood(string s) {
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
        string s = "leEeetcode";
        auto localResult = solution.makeGood(s);
        string expected = "leetcode";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abBAcC";
        auto localResult = solution.makeGood(s);
        string expected = "";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "s";
        auto localResult = solution.makeGood(s);
        string expected = "s";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
