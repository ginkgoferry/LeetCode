/*
 * Problem: 1048. 最长字符串链 / Longest String Chain
 * Link: https://leetcode.cn/problems/longest-string-chain/
 * Chapter: 动态规划
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
    int longestStrChain(vector<string>& words) {
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
        vector<string> words = {"a", "b", "ba", "bca", "bda", "bdca"};
        auto localResult = solution.longestStrChain(words);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"xbc", "pcxbcf", "xb", "cxbc", "pcxbc"};
        auto localResult = solution.longestStrChain(words);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"abcd", "dbqca"};
        auto localResult = solution.longestStrChain(words);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
