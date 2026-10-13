/*
 * Problem: 1593. 拆分字符串使唯一子字符串的数目最大 / Split a String Into the Max Number of Unique Substrings
 * Link: https://leetcode.cn/problems/split-a-string-into-the-max-number-of-unique-substrings/
 * Chapter: 树与回溯
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
    int maxUniqueSplit(string s) {
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
        string s = "ababccc";
        auto localResult = solution.maxUniqueSplit(s);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aba";
        auto localResult = solution.maxUniqueSplit(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aa";
        auto localResult = solution.maxUniqueSplit(s);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
