/*
 * Problem: LCP 18. 早餐组合 / 早餐组合
 * Link: https://leetcode.cn/problems/2vYnGI/
 * Chapter: 双指针
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
    int breakfastNumber(vector<int>& staple, vector<int>& drinks, int x) {
        // TODO: 在这里实现你的解法。
        (void)staple;
        (void)drinks;
        (void)x;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> staple = {10, 20, 5};
        vector<int> drinks = {5, 5, 2};
        int x = 15;
        auto localResult = solution.breakfastNumber(staple, drinks, x);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> staple = {2, 1, 1};
        vector<int> drinks = {8, 9, 5, 1};
        int x = 9;
        auto localResult = solution.breakfastNumber(staple, drinks, x);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> staple = {1};
        vector<int> drinks = {1};
        int x = 1;
        auto localResult = solution.breakfastNumber(staple, drinks, x);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
