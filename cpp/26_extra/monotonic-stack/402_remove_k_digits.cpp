/*
 * Problem: 402. 移掉 K 位数字 / Remove K Digits
 * Link: https://leetcode.cn/problems/remove-k-digits/
 * Chapter: 栈
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
    string removeKdigits(string num, int k) {
        // TODO: 在这里实现你的解法。
        (void)num;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string num = "1432219";
        int k = 3;
        auto localResult = solution.removeKdigits(num, k);
        string expected = "1219";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "10200";
        int k = 1;
        auto localResult = solution.removeKdigits(num, k);
        string expected = "200";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "10";
        int k = 2;
        auto localResult = solution.removeKdigits(num, k);
        string expected = "0";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
