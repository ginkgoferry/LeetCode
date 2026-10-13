/*
 * Problem: 3992. 重新排列字符串以避免字符对 / Rearrange String to Avoid Character Pair
 * Link: https://leetcode.cn/problems/rearrange-string-to-avoid-character-pair/
 * Chapter: 双指针
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
    string rearrangeString(string s, char x, char y) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)x;
        (void)y;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "aabc";
        char x = 'a';
        char y = 'c';
        const auto original = s;
        auto localResult = solution.rearrangeString(s, x, y);
        auto sortedResult = localResult;
        auto sortedOriginal = original;
        sort(sortedResult.begin(), sortedResult.end());
        sort(sortedOriginal.begin(), sortedOriginal.end());
        assert(sortedResult == sortedOriginal);
        bool seenX = false;
        for (char value : localResult) {
            if (value == x) seenX = true;
            if (value == y) assert(!seenX);
        }
    }

    {
        // 官方样例
        string s = "dcab";
        char x = 'd';
        char y = 'b';
        const auto original = s;
        auto localResult = solution.rearrangeString(s, x, y);
        auto sortedResult = localResult;
        auto sortedOriginal = original;
        sort(sortedResult.begin(), sortedResult.end());
        sort(sortedOriginal.begin(), sortedOriginal.end());
        assert(sortedResult == sortedOriginal);
        bool seenX = false;
        for (char value : localResult) {
            if (value == x) seenX = true;
            if (value == y) assert(!seenX);
        }
    }

    {
        // 官方样例
        string s = "axe";
        char x = 'o';
        char y = 'x';
        const auto original = s;
        auto localResult = solution.rearrangeString(s, x, y);
        auto sortedResult = localResult;
        auto sortedOriginal = original;
        sort(sortedResult.begin(), sortedResult.end());
        sort(sortedOriginal.begin(), sortedOriginal.end());
        assert(sortedResult == sortedOriginal);
        bool seenX = false;
        for (char value : localResult) {
            if (value == x) seenX = true;
            if (value == y) assert(!seenX);
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
