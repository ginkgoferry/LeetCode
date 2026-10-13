/*
 * Problem: 2145. 统计隐藏数组数目 / Count the Hidden Sequences
 * Link: https://leetcode.cn/problems/count-the-hidden-sequences/
 * Chapter: 数学
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
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        // TODO: 在这里实现你的解法。
        (void)differences;
        (void)lower;
        (void)upper;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> differences = {1, -3, 4};
        int lower = 1;
        int upper = 6;
        auto localResult = solution.numberOfArrays(differences, lower, upper);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> differences = {3, -4, 5, 1, -2};
        int lower = -4;
        int upper = 5;
        auto localResult = solution.numberOfArrays(differences, lower, upper);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> differences = {4, -7, 2};
        int lower = 3;
        int upper = 6;
        auto localResult = solution.numberOfArrays(differences, lower, upper);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
