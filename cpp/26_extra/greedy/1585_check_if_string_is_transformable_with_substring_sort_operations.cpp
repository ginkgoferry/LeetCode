/*
 * Problem: 1585. 检查字符串是否可以通过排序子字符串得到另一个字符串 / Check If String Is Transformable With Substring Sort Operations
 * Link: https://leetcode.cn/problems/check-if-string-is-transformable-with-substring-sort-operations/
 * Chapter: 贪心算法
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
    bool isTransformable(string s, string t) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)t;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "84532";
        string t = "34852";
        auto localResult = solution.isTransformable(s, t);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "34521";
        string t = "23415";
        auto localResult = solution.isTransformable(s, t);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "12345";
        string t = "12435";
        auto localResult = solution.isTransformable(s, t);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "1";
        string t = "2";
        auto localResult = solution.isTransformable(s, t);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
