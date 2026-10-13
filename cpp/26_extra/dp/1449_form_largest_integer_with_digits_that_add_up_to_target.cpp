/*
 * Problem: 1449. 数位成本和为目标值的最大数字 / Form Largest Integer With Digits That Add up to Target
 * Link: https://leetcode.cn/problems/form-largest-integer-with-digits-that-add-up-to-target/
 * Chapter: 动态规划
 * Difficulty: Hard
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
    string largestNumber(vector<int>& cost, int target) {
        // TODO: 在这里实现你的解法。
        (void)cost;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> cost = {4, 3, 2, 5, 6, 7, 2, 5, 5};
        int target = 9;
        auto localResult = solution.largestNumber(cost, target);
        string expected = "7772";
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cost = {7, 6, 5, 5, 5, 6, 8, 7, 8};
        int target = 12;
        auto localResult = solution.largestNumber(cost, target);
        string expected = "85";
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cost = {2, 4, 6, 2, 4, 6, 4, 4, 4};
        int target = 5;
        auto localResult = solution.largestNumber(cost, target);
        string expected = "0";
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cost = {6, 10, 15, 40, 40, 40, 40, 40, 40};
        int target = 47;
        auto localResult = solution.largestNumber(cost, target);
        string expected = "32211";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
