/*
 * Problem: 3085. 成为 K 特殊字符串需要删除的最少字符数 / Minimum Deletions to Make String K-Special
 * Link: https://leetcode.cn/problems/minimum-deletions-to-make-string-k-special/
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
    int minimumDeletions(string word, int k) {
        // TODO: 在这里实现你的解法。
        (void)word;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word = "aabcaba";
        int k = 0;
        auto localResult = solution.minimumDeletions(word, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "dabdcbdcdcd";
        int k = 2;
        auto localResult = solution.minimumDeletions(word, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "aaabaaa";
        int k = 2;
        auto localResult = solution.minimumDeletions(word, k);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
