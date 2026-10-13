/*
 * Problem: 3483. 不同三位偶数的数目 / Unique 3-Digit Even Numbers
 * Link: https://leetcode.cn/problems/unique-3-digit-even-numbers/
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
    int totalNumbers(vector<int>& digits) {
        // TODO: 在这里实现你的解法。
        (void)digits;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> digits = {1, 2, 3, 4};
        auto localResult = solution.totalNumbers(digits);
        int expected = 12;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> digits = {0, 2, 2};
        auto localResult = solution.totalNumbers(digits);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> digits = {6, 6, 6};
        auto localResult = solution.totalNumbers(digits);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> digits = {1, 3, 5};
        auto localResult = solution.totalNumbers(digits);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
