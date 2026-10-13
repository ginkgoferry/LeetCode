/*
 * Problem: 1539. 第 k 个缺失的正整数 / Kth Missing Positive Number
 * Link: https://leetcode.cn/problems/kth-missing-positive-number/
 * Chapter: 二分查找
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
    int findKthPositive(vector<int>& arr, int k) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {2, 3, 4, 7, 11};
        int k = 5;
        auto localResult = solution.findKthPositive(arr, k);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 2, 3, 4};
        int k = 2;
        auto localResult = solution.findKthPositive(arr, k);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
