/*
 * Problem: 1471. 数组中的 k 个最强值 / The k Strongest Values in an Array
 * Link: https://leetcode.cn/problems/the-k-strongest-values-in-an-array/
 * Chapter: 双指针
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
    vector<int> getStrongest(vector<int>& arr, int k) {
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
        vector<int> arr = {1, 2, 3, 4, 5};
        int k = 2;
        auto localResult = solution.getStrongest(arr, k);
        vector<int> expected = {5, 1};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 1, 3, 5, 5};
        int k = 2;
        auto localResult = solution.getStrongest(arr, k);
        vector<int> expected = {5, 5};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {6, 7, 11, 7, 6, 8};
        int k = 5;
        auto localResult = solution.getStrongest(arr, k);
        vector<int> expected = {11, 8, 6, 6, 7};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
