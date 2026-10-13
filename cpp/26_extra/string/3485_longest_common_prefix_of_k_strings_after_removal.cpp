/*
 * Problem: 3485. 删除元素后 K 个字符串的最长公共前缀 / Longest Common Prefix of K Strings After Removal
 * Link: https://leetcode.cn/problems/longest-common-prefix-of-k-strings-after-removal/
 * Chapter: 字符串
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
    vector<int> longestCommonPrefix(vector<string>& words, int k) {
        // TODO: 在这里实现你的解法。
        (void)words;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> words = {"jump", "run", "run", "jump", "run"};
        int k = 2;
        auto localResult = solution.longestCommonPrefix(words, k);
        vector<int> expected = {3, 4, 4, 3, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"dog", "racer", "car"};
        int k = 2;
        auto localResult = solution.longestCommonPrefix(words, k);
        vector<int> expected = {0, 0, 0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
