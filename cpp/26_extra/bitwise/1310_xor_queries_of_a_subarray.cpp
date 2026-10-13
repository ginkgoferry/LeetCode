/*
 * Problem: 1310. 子数组异或查询 / XOR Queries of a Subarray
 * Link: https://leetcode.cn/problems/xor-queries-of-a-subarray/
 * Chapter: 位运算
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
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {1, 3, 4, 8};
        vector<vector<int>> queries = {{0, 1}, {1, 2}, {0, 3}, {3, 3}};
        auto localResult = solution.xorQueries(arr, queries);
        vector<int> expected = {2, 7, 14, 8};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {4, 8, 2, 10};
        vector<vector<int>> queries = {{2, 3}, {1, 3}, {0, 0}, {0, 3}};
        auto localResult = solution.xorQueries(arr, queries);
        vector<int> expected = {8, 0, 4, 4};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
