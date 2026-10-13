/*
 * Problem: 1052. 爱生气的书店老板 / Grumpy Bookstore Owner
 * Link: https://leetcode.cn/problems/grumpy-bookstore-owner/
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
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        // TODO: 在这里实现你的解法。
        (void)customers;
        (void)grumpy;
        (void)minutes;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> customers = {1, 0, 1, 2, 1, 1, 7, 5};
        vector<int> grumpy = {0, 1, 0, 1, 0, 1, 0, 1};
        int minutes = 3;
        auto localResult = solution.maxSatisfied(customers, grumpy, minutes);
        int expected = 16;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> customers = {1};
        vector<int> grumpy = {0};
        int minutes = 1;
        auto localResult = solution.maxSatisfied(customers, grumpy, minutes);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> customers = {1};
        vector<int> grumpy = {1};
        int minutes = 1;
        auto localResult = solution.maxSatisfied(customers, grumpy, minutes);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
