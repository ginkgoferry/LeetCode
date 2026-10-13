/*
 * Problem: 3145. 大数组元素的乘积 / Find Products of Elements of Big Array
 * Link: https://leetcode.cn/problems/find-products-of-elements-of-big-array/
 * Chapter: 位运算
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
    vector<int> findProductsOfElements(vector<vector<long long>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<long long>> queries = {{1LL, 3LL, 7LL}};
        auto localResult = solution.findProductsOfElements(queries);
        vector<int> expected = {4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<long long>> queries = {{2LL, 5LL, 3LL}, {7LL, 7LL, 4LL}};
        auto localResult = solution.findProductsOfElements(queries);
        vector<int> expected = {2, 2};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
