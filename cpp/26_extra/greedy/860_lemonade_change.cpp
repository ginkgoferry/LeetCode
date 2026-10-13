/*
 * Problem: 860. 柠檬水找零 / Lemonade Change
 * Link: https://leetcode.cn/problems/lemonade-change/
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
    bool lemonadeChange(vector<int>& bills) {
        // TODO: 在这里实现你的解法。
        (void)bills;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> bills = {5, 5, 5, 10, 20};
        auto localResult = solution.lemonadeChange(bills);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> bills = {5, 5, 10, 10, 20};
        auto localResult = solution.lemonadeChange(bills);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
