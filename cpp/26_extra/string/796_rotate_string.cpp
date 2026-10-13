/*
 * Problem: 796. 旋转字符串 / Rotate String
 * Link: https://leetcode.cn/problems/rotate-string/
 * Chapter: 字符串
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
    bool rotateString(string s, string goal) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)goal;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abcde";
        string goal = "cdeab";
        auto localResult = solution.rotateString(s, goal);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcde";
        string goal = "abced";
        auto localResult = solution.rotateString(s, goal);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
