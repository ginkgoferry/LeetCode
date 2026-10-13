/*
 * Problem: 1423. 可获得的最大点数 / Maximum Points You Can Obtain from Cards
 * Link: https://leetcode.cn/problems/maximum-points-you-can-obtain-from-cards/
 * Chapter: 滑动窗口
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
    int maxScore(vector<int>& cardPoints, int k) {
        // TODO: 在这里实现你的解法。
        (void)cardPoints;
        (void)k;
        return 0;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> cardPoints = {1, 2, 3, 4, 5, 6, 1};
        int k = 3;
        auto localResult = solution.maxScore(cardPoints, k);
        int expected = 12;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cardPoints = {2, 2, 2};
        int k = 2;
        auto localResult = solution.maxScore(cardPoints, k);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cardPoints = {9, 7, 7, 9, 7, 7, 9};
        int k = 7;
        auto localResult = solution.maxScore(cardPoints, k);
        int expected = 55;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cardPoints = {1, 1000, 1};
        int k = 1;
        auto localResult = solution.maxScore(cardPoints, k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cardPoints = {1, 79, 80, 1, 1, 1, 200, 1};
        int k = 3;
        auto localResult = solution.maxScore(cardPoints, k);
        int expected = 202;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> cardPoints = {7};
        int k = 1;
        auto localResult = solution.maxScore(cardPoints, k);
        int expected = 7;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
