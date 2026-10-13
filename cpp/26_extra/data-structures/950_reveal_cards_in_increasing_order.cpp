/*
 * Problem: 950. 按递增顺序显示卡牌 / Reveal Cards In Increasing Order
 * Link: https://leetcode.cn/problems/reveal-cards-in-increasing-order/
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
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
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
        vector<int> deck = {17, 13, 11, 2, 3, 5, 7};
        auto localResult = solution.deckRevealedIncreasing(deck);
        vector<int> expected = {2, 13, 3, 11, 5, 17, 7};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
