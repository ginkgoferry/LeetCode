/*
 * Problem: 854. 相似度为 K 的字符串 / K-Similar Strings
 * Link: https://leetcode.cn/problems/k-similar-strings/
 * Chapter: 图论
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
    int kSimilarity(string s1, string s2) {
        // TODO: 在这里实现你的解法。
        (void)s1;
        (void)s2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s1 = "ab";
        string s2 = "ba";
        auto localResult = solution.kSimilarity(s1, s2);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s1 = "abc";
        string s2 = "bca";
        auto localResult = solution.kSimilarity(s1, s2);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
