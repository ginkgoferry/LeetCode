/*
 * Problem: 875. 爱吃香蕉的珂珂 / Koko Eating Bananas
 * Link: https://leetcode.cn/problems/koko-eating-bananas/
 * Chapter: 二分查找
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
    int minEatingSpeed(vector<int>& piles, int h) {
        // TODO: 在这里实现你的解法。
        (void)piles;
        (void)h;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> piles = {3, 6, 7, 11};
        int h = 8;
        auto localResult = solution.minEatingSpeed(piles, h);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> piles = {30, 11, 23, 4, 20};
        int h = 5;
        auto localResult = solution.minEatingSpeed(piles, h);
        int expected = 30;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> piles = {30, 11, 23, 4, 20};
        int h = 6;
        auto localResult = solution.minEatingSpeed(piles, h);
        int expected = 23;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
