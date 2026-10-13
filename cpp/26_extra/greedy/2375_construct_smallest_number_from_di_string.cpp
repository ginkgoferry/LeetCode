/*
 * Problem: 2375. 根据模式串构造最小数字 / Construct Smallest Number From DI String
 * Link: https://leetcode.cn/problems/construct-smallest-number-from-di-string/
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
    string smallestNumber(string pattern) {
        // TODO: 在这里实现你的解法。
        (void)pattern;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string pattern = "IIIDIDDD";
        auto localResult = solution.smallestNumber(pattern);
        string expected = "123549876";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string pattern = "DDD";
        auto localResult = solution.smallestNumber(pattern);
        string expected = "4321";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
