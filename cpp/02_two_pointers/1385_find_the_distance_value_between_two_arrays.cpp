/*
 * Problem: 1385. 两个数组间的距离值 / Find the Distance Value Between Two Arrays
 * Link: https://leetcode.cn/problems/find-the-distance-value-between-two-arrays/
 * Chapter: 双指针
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
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        // TODO: 在这里实现你的解法。
        (void)arr1;
        (void)arr2;
        (void)d;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr1 = {4, 5, 8};
        vector<int> arr2 = {10, 9, 1, 8};
        int d = 2;
        auto localResult = solution.findTheDistanceValue(arr1, arr2, d);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr1 = {1, 4, 2, 3};
        vector<int> arr2 = {-4, -3, 6, 10, 20, 30};
        int d = 3;
        auto localResult = solution.findTheDistanceValue(arr1, arr2, d);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr1 = {2, 1, 100, 3};
        vector<int> arr2 = {-5, -2, 10, -3, 7};
        int d = 6;
        auto localResult = solution.findTheDistanceValue(arr1, arr2, d);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
