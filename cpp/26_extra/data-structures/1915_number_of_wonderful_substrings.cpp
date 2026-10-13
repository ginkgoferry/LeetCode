/*
 * Problem: 1915. 最美子字符串的数目 / Number of Wonderful Substrings
 * Link: https://leetcode.cn/problems/number-of-wonderful-substrings/
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
    long long wonderfulSubstrings(string word) {
        // TODO: 在这里实现你的解法。
        (void)word;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word = "aba";
        auto localResult = solution.wonderfulSubstrings(word);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "aabb";
        auto localResult = solution.wonderfulSubstrings(word);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "he";
        auto localResult = solution.wonderfulSubstrings(word);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
