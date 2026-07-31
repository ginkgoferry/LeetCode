/*
 * Problem: 739. 每日温度 / Daily Temperatures
 * Link: https://leetcode.cn/problems/daily-temperatures/
 * Chapter: 栈
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
    vector<int> dailyTemperatures(vector<int>& temperatures) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
        assert((solution.dailyTemperatures(temperatures) == vector<int>{1, 1, 4, 2, 1, 1, 0, 0}));
    }

    {
        vector<int> temperatures = {30, 40, 50, 60};
        assert((solution.dailyTemperatures(temperatures) == vector<int>{1, 1, 1, 0}));
    }

    {
        vector<int> temperatures = {30, 60, 90};
        assert((solution.dailyTemperatures(temperatures) == vector<int>{1, 1, 0}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
