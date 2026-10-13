/*
 * Problem: 2843. 统计对称整数的数目 / Count Symmetric Integers
 * Link: https://leetcode.cn/problems/count-symmetric-integers/
 * Chapter: 动态规划
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
    int countSymmetricIntegers(int low, int high) {
        // TODO: 在这里实现你的解法。
        (void)low;
        (void)high;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int low = 1;
        int high = 100;
        auto localResult = solution.countSymmetricIntegers(low, high);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int low = 1200;
        int high = 1230;
        auto localResult = solution.countSymmetricIntegers(low, high);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
