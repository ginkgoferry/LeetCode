/*
 * Problem: 904. 水果成篮 / Fruit Into Baskets
 * Link: https://leetcode.cn/problems/fruit-into-baskets/
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
    int totalFruit(vector<int>& fruits) {
        // TODO: 在这里实现你的解法。
        (void)fruits;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> fruits = {1, 2, 1};
        auto localResult = solution.totalFruit(fruits);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> fruits = {0, 1, 2, 2};
        auto localResult = solution.totalFruit(fruits);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> fruits = {1, 2, 3, 2, 2};
        auto localResult = solution.totalFruit(fruits);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> fruits = {3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4};
        auto localResult = solution.totalFruit(fruits);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
