/*
 * Problem: 1356. 根据数字二进制下 1 的数目排序 / Sort Integers by The Number of 1 Bits
 * Link: https://leetcode.cn/problems/sort-integers-by-the-number-of-1-bits/
 * Chapter: 位运算
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
    vector<int> sortByBits(vector<int>& arr) {
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
        vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};
        auto localResult = solution.sortByBits(arr);
        vector<int> expected = {0, 1, 2, 4, 8, 3, 5, 6, 7};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
        auto localResult = solution.sortByBits(arr);
        vector<int> expected = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {10000, 10000};
        auto localResult = solution.sortByBits(arr);
        vector<int> expected = {10000, 10000};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {2, 3, 5, 7, 11, 13, 17, 19};
        auto localResult = solution.sortByBits(arr);
        vector<int> expected = {2, 3, 5, 17, 7, 11, 13, 19};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {10, 100, 1000, 10000};
        auto localResult = solution.sortByBits(arr);
        vector<int> expected = {10, 100, 10000, 1000};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
