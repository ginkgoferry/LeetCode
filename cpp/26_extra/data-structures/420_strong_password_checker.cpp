/*
 * Problem: 420. 强密码检验器 / Strong Password Checker
 * Link: https://leetcode.cn/problems/strong-password-checker/
 * Chapter: 数据结构
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
    int strongPasswordChecker(string password) {
        // TODO: 在这里实现你的解法。
        (void)password;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string password = "a";
        auto localResult = solution.strongPasswordChecker(password);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string password = "aA1";
        auto localResult = solution.strongPasswordChecker(password);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string password = "1337C0d3";
        auto localResult = solution.strongPasswordChecker(password);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
