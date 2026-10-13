/*
 * Problem: 1331. 数组序号转换 / Rank Transform of an Array
 * Link: https://leetcode.cn/problems/rank-transform-of-an-array/
 * Chapter: 数据结构
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
    vector<int> arrayRankTransform(vector<int>& arr) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {40, 10, 20, 30};
        auto localResult = solution.arrayRankTransform(arr);
        vector<int> expected = {4, 1, 2, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {100, 100, 100};
        auto localResult = solution.arrayRankTransform(arr);
        vector<int> expected = {1, 1, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {37, 12, 28, 9, 100, 56, 80, 5, 12};
        auto localResult = solution.arrayRankTransform(arr);
        vector<int> expected = {5, 3, 4, 2, 8, 6, 7, 1, 3};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
