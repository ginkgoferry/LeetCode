/*
 * Problem: 2117. 一个区间内所有数乘积的缩写 / Abbreviating the Product of a Range
 * Link: https://leetcode.cn/problems/abbreviating-the-product-of-a-range/
 * Chapter: 数学
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
    string abbreviateProduct(int left, int right) {
        // TODO: 在这里实现你的解法。
        (void)left;
        (void)right;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int left = 1;
        int right = 4;
        auto localResult = solution.abbreviateProduct(left, right);
        string expected = "24e0";
        assert((localResult == expected));
    }

    {
        // 官方样例
        int left = 2;
        int right = 11;
        auto localResult = solution.abbreviateProduct(left, right);
        string expected = "399168e2";
        assert((localResult == expected));
    }

    {
        // 官方样例
        int left = 371;
        int right = 375;
        auto localResult = solution.abbreviateProduct(left, right);
        string expected = "7219856259e3";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
