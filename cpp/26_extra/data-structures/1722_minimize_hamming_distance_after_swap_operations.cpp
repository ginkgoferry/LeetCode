/*
 * Problem: 1722. 执行交换操作后的最小汉明距离 / Minimize Hamming Distance After Swap Operations
 * Link: https://leetcode.cn/problems/minimize-hamming-distance-after-swap-operations/
 * Chapter: 数据结构
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
    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
        // TODO: 在这里实现你的解法。
        (void)source;
        (void)target;
        (void)allowedSwaps;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> source = {1, 2, 3, 4};
        vector<int> target = {2, 1, 4, 5};
        vector<vector<int>> allowedSwaps = {{0, 1}, {2, 3}};
        auto localResult = solution.minimumHammingDistance(source, target, allowedSwaps);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> source = {1, 2, 3, 4};
        vector<int> target = {1, 3, 2, 4};
        vector<vector<int>> allowedSwaps = {};
        auto localResult = solution.minimumHammingDistance(source, target, allowedSwaps);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> source = {5, 1, 2, 4, 3};
        vector<int> target = {1, 5, 4, 2, 3};
        vector<vector<int>> allowedSwaps = {{0, 4}, {4, 2}, {1, 3}, {1, 4}};
        auto localResult = solution.minimumHammingDistance(source, target, allowedSwaps);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
