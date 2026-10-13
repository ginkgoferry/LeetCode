/*
 * Problem: 914. 卡牌分组 / X of a Kind in a Deck of Cards
 * Link: https://leetcode.cn/problems/x-of-a-kind-in-a-deck-of-cards/
 * Chapter: 数学
 * Difficulty: Easy
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
    bool hasGroupsSizeX(vector<int>& deck) {
        // TODO: 在这里实现你的解法。
        (void)deck;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> deck = {1, 2, 3, 4, 4, 3, 2, 1};
        auto localResult = solution.hasGroupsSizeX(deck);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> deck = {1, 1, 1, 2, 2, 2, 3, 3};
        auto localResult = solution.hasGroupsSizeX(deck);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
