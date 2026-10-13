/*
 * Problem: 2746. 字符串连接删减字母 / Decremental String Concatenation
 * Link: https://leetcode.cn/problems/decremental-string-concatenation/
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
    int minimizeConcatenatedLength(vector<string>& words) {
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
        vector<string> words = {"aa", "ab", "bc"};
        auto localResult = solution.minimizeConcatenatedLength(words);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"ab", "b"};
        auto localResult = solution.minimizeConcatenatedLength(words);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"aaa", "c", "aba"};
        auto localResult = solution.minimizeConcatenatedLength(words);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
