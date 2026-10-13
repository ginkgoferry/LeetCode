/*
 * Problem: 2734. 执行子串操作后的字典序最小字符串 / Lexicographically Smallest String After Substring Operation
 * Link: https://leetcode.cn/problems/lexicographically-smallest-string-after-substring-operation/
 * Chapter: 贪心算法
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
    string smallestString(string s) {
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
        string s = "cbabc";
        auto localResult = solution.smallestString(s);
        string expected = "baabc";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "acbbc";
        auto localResult = solution.smallestString(s);
        string expected = "abaab";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "leetcode";
        auto localResult = solution.smallestString(s);
        string expected = "kddsbncd";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
