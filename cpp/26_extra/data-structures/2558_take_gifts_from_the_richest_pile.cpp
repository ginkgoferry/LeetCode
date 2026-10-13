/*
 * Problem: 2558. 从数量最多的堆取走礼物 / Take Gifts From the Richest Pile
 * Link: https://leetcode.cn/problems/take-gifts-from-the-richest-pile/
 * Chapter: 数据结构
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
    long long pickGifts(vector<int>& gifts, int k) {
        // TODO: 在这里实现你的解法。
        (void)gifts;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> gifts = {25, 64, 9, 4, 100};
        int k = 4;
        auto localResult = solution.pickGifts(gifts, k);
        long long expected = 29LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> gifts = {1, 1, 1, 1};
        int k = 4;
        auto localResult = solution.pickGifts(gifts, k);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
