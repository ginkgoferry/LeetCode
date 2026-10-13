/*
 * Problem: 1358. 包含所有三种字符的子字符串数目 / Number of Substrings Containing All Three Characters
 * Link: https://leetcode.cn/problems/number-of-substrings-containing-all-three-characters/
 * Chapter: 滑动窗口
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
    int numberOfSubstrings(string s) {
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
        string s = "abcabc";
        auto localResult = solution.numberOfSubstrings(s);
        int expected = 10;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aaacb";
        auto localResult = solution.numberOfSubstrings(s);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abc";
        auto localResult = solution.numberOfSubstrings(s);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
