/*
 * Problem: 1647. 字符频次唯一的最小删除次数 / Minimum Deletions to Make Character Frequencies Unique
 * Link: https://leetcode.cn/problems/minimum-deletions-to-make-character-frequencies-unique/
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
    int minDeletions(string s) {
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
        string s = "aab";
        auto localResult = solution.minDeletions(s);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aaabbbcc";
        auto localResult = solution.minDeletions(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "ceabaacb";
        auto localResult = solution.minDeletions(s);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
