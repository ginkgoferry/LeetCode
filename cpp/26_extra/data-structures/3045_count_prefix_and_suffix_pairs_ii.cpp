/*
 * Problem: 3045. 统计前后缀下标对 II / Count Prefix and Suffix Pairs II
 * Link: https://leetcode.cn/problems/count-prefix-and-suffix-pairs-ii/
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
    long long countPrefixSuffixPairs(vector<string>& words) {
        // TODO: 在这里实现你的解法。
        (void)words;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> words = {"a", "aba", "ababa", "aa"};
        auto localResult = solution.countPrefixSuffixPairs(words);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"pa", "papa", "ma", "mama"};
        auto localResult = solution.countPrefixSuffixPairs(words);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"abab", "ab"};
        auto localResult = solution.countPrefixSuffixPairs(words);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
