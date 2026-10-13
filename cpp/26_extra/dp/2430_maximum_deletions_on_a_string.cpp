/*
 * Problem: 2430. 对字母串可执行的最大删除数 / Maximum Deletions on a String
 * Link: https://leetcode.cn/problems/maximum-deletions-on-a-string/
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
    int deleteString(string s) {
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
        string s = "abcabcdabc";
        auto localResult = solution.deleteString(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aaabaab";
        auto localResult = solution.deleteString(s);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aaaaa";
        auto localResult = solution.deleteString(s);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
