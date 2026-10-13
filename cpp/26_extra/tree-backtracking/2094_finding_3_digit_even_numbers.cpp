/*
 * Problem: 2094. 找出 3 位偶数 / Finding 3-Digit Even Numbers
 * Link: https://leetcode.cn/problems/finding-3-digit-even-numbers/
 * Chapter: 树与回溯
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
    vector<int> findEvenNumbers(vector<int>& digits) {
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
        vector<int> digits = {2, 1, 3, 0};
        auto localResult = solution.findEvenNumbers(digits);
        vector<int> expected = {102, 120, 130, 132, 210, 230, 302, 310, 312, 320};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> digits = {2, 2, 8, 8, 2};
        auto localResult = solution.findEvenNumbers(digits);
        vector<int> expected = {222, 228, 282, 288, 822, 828, 882};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> digits = {3, 7, 5};
        auto localResult = solution.findEvenNumbers(digits);
        vector<int> expected = {};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
