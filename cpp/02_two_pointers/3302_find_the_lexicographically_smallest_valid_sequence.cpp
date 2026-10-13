/*
 * Problem: 3302. 字典序最小的合法序列 / Find the Lexicographically Smallest Valid Sequence
 * Link: https://leetcode.cn/problems/find-the-lexicographically-smallest-valid-sequence/
 * Chapter: 双指针
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
    vector<int> validSequence(string word1, string word2) {
        // TODO: 在这里实现你的解法。
        (void)word1;
        (void)word2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word1 = "vbcca";
        string word2 = "abc";
        auto localResult = solution.validSequence(word1, word2);
        vector<int> expected = {0, 1, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "bacdc";
        string word2 = "abc";
        auto localResult = solution.validSequence(word1, word2);
        vector<int> expected = {1, 2, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "aaaaaa";
        string word2 = "aaabc";
        auto localResult = solution.validSequence(word1, word2);
        vector<int> expected = {};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "abc";
        string word2 = "ab";
        auto localResult = solution.validSequence(word1, word2);
        vector<int> expected = {0, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
