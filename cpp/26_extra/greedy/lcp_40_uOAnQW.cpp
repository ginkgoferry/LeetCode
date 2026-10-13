/*
 * Problem: LCP 40. 心算挑战 / 心算挑战
 * Link: https://leetcode.cn/problems/uOAnQW/
 * Chapter: 贪心算法
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
    int maximumScore(vector<int>& cards, int cnt) {
        // TODO: 在这里实现你的解法。
        (void)cards;
        (void)cnt;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> cards = {1, 2, 8, 9};
        int cnt = 3;
        auto localResult = solution.maximumScore(cards, cnt);
        int expected = 18;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cards = {3, 3, 1};
        int cnt = 1;
        auto localResult = solution.maximumScore(cards, cnt);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
