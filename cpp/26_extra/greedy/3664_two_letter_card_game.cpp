/*
 * Problem: 3664. 两个字母卡牌游戏 / Two-Letter Card Game
 * Link: https://leetcode.cn/problems/two-letter-card-game/
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
    int score(vector<string>& cards, char x) {
        // TODO: 在这里实现你的解法。
        (void)cards;
        (void)x;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> cards = {"aa", "ab", "ba", "ac"};
        char x = 'a';
        auto localResult = solution.score(cards, x);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> cards = {"aa", "ab", "ba"};
        char x = 'a';
        auto localResult = solution.score(cards, x);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> cards = {"aa", "ab", "ba", "ac"};
        char x = 'b';
        auto localResult = solution.score(cards, x);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
