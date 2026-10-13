/*
 * Problem: 3403. 从盒子中找出字典序最大的字符串 I / Find the Lexicographically Largest String From the Box I
 * Link: https://leetcode.cn/problems/find-the-lexicographically-largest-string-from-the-box-i/
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
    string answerString(string word, int numFriends) {
        // TODO: 在这里实现你的解法。
        (void)word;
        (void)numFriends;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word = "dbca";
        int numFriends = 2;
        auto localResult = solution.answerString(word, numFriends);
        string expected = "dbc";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "gggg";
        int numFriends = 4;
        auto localResult = solution.answerString(word, numFriends);
        string expected = "g";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
