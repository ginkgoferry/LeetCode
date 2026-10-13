/*
 * Problem: 1521. 找到最接近目标值的函数值 / Find a Value of a Mysterious Function Closest to Target
 * Link: https://leetcode.cn/problems/find-a-value-of-a-mysterious-function-closest-to-target/
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
    int closestToTarget(vector<int>& arr, int target) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {9, 12, 3, 7, 15};
        int target = 5;
        auto localResult = solution.closestToTarget(arr, target);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1000000, 1000000, 1000000};
        int target = 1;
        auto localResult = solution.closestToTarget(arr, target);
        int expected = 999999;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 2, 4, 8, 16};
        int target = 0;
        auto localResult = solution.closestToTarget(arr, target);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
