/*
 * Problem: 1641. 统计字典序元音字符串的数目 / Count Sorted Vowel Strings
 * Link: https://leetcode.cn/problems/count-sorted-vowel-strings/
 * Chapter: 数学
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
    int countVowelStrings(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 1;
        auto localResult = solution.countVowelStrings(n);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        auto localResult = solution.countVowelStrings(n);
        int expected = 15;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 33;
        auto localResult = solution.countVowelStrings(n);
        int expected = 66045;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
