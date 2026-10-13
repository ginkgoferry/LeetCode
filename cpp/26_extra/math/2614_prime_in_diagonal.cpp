/*
 * Problem: 2614. 对角线上的质数 / Prime In Diagonal
 * Link: https://leetcode.cn/problems/prime-in-diagonal/
 * Chapter: 数学
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
    int diagonalPrime(vector<vector<int>>& nums) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> nums = {{1, 2, 3}, {5, 6, 7}, {9, 10, 11}};
        auto localResult = solution.diagonalPrime(nums);
        int expected = 11;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> nums = {{1, 2, 3}, {5, 17, 7}, {9, 11, 10}};
        auto localResult = solution.diagonalPrime(nums);
        int expected = 17;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
