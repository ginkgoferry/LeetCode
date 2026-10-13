/*
 * Problem: 1439. 有序矩阵中的第 k 个最小数组和 / Find the Kth Smallest Sum of a Matrix With Sorted Rows
 * Link: https://leetcode.cn/problems/find-the-kth-smallest-sum-of-a-matrix-with-sorted-rows/
 * Chapter: 二分查找
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
    int kthSmallest(vector<vector<int>>& mat, int k) {
        // TODO: 在这里实现你的解法。
        (void)mat;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> mat = {{1, 3, 11}, {2, 4, 6}};
        int k = 5;
        auto localResult = solution.kthSmallest(mat, k);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> mat = {{1, 3, 11}, {2, 4, 6}};
        int k = 9;
        auto localResult = solution.kthSmallest(mat, k);
        int expected = 17;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> mat = {{1, 10, 10}, {1, 4, 5}, {2, 3, 6}};
        int k = 7;
        auto localResult = solution.kthSmallest(mat, k);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> mat = {{1, 1, 10}, {2, 2, 9}};
        int k = 7;
        auto localResult = solution.kthSmallest(mat, k);
        int expected = 12;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
