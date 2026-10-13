/*
 * Problem: 378. 有序矩阵中第 K 小的元素 / Kth Smallest Element in a Sorted Matrix
 * Link: https://leetcode.cn/problems/kth-smallest-element-in-a-sorted-matrix/
 * Chapter: 二分查找
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
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        // TODO: 在这里实现你的解法。
        (void)matrix;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> matrix = {{1, 5, 9}, {10, 11, 13}, {12, 13, 15}};
        int k = 8;
        auto localResult = solution.kthSmallest(matrix, k);
        int expected = 13;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> matrix = {{-5}};
        int k = 1;
        auto localResult = solution.kthSmallest(matrix, k);
        int expected = -5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
