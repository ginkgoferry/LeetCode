/*
 * Problem: 1131. 绝对值表达式的最大值 / Maximum of Absolute Value Expression
 * Link: https://leetcode.cn/problems/maximum-of-absolute-value-expression/
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
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        // TODO: 在这里实现你的解法。
        (void)arr1;
        (void)arr2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr1 = {1, 2, 3, 4};
        vector<int> arr2 = {-1, 4, 5, 6};
        auto localResult = solution.maxAbsValExpr(arr1, arr2);
        int expected = 13;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr1 = {1, -2, -5, 0, 10};
        vector<int> arr2 = {0, -2, -1, -7, -4};
        auto localResult = solution.maxAbsValExpr(arr1, arr2);
        int expected = 20;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
