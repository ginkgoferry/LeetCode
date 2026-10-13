/*
 * Problem: 71. 简化路径 / Simplify Path
 * Link: https://leetcode.cn/problems/simplify-path/
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
    string simplifyPath(string path) {
        // TODO: 在这里实现你的解法。
        (void)path;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string path = "/home/";
        auto localResult = solution.simplifyPath(path);
        string expected = "/home";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string path = "/home//foo/";
        auto localResult = solution.simplifyPath(path);
        string expected = "/home/foo";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string path = "/home/user/Documents/../Pictures";
        auto localResult = solution.simplifyPath(path);
        string expected = "/home/user/Pictures";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string path = "/../";
        auto localResult = solution.simplifyPath(path);
        string expected = "/";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string path = "/.../a/../b/c/../d/./";
        auto localResult = solution.simplifyPath(path);
        string expected = "/.../b/d";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
