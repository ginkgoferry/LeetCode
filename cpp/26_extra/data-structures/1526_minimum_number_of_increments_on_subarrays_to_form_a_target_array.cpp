/*
 * Problem: 1526. 形成目标数组的子数组最少增加次数 / Minimum Number of Increments on Subarrays to Form a Target Array
 * Link: https://leetcode.cn/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/
 * Chapter: 数据结构
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
    int minNumberOperations(vector<int>& target) {
        // TODO: 在这里实现你的解法。
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> target = {1, 2, 3, 2, 1};
        auto localResult = solution.minNumberOperations(target);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> target = {3, 1, 1, 2};
        auto localResult = solution.minNumberOperations(target);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> target = {3, 1, 5, 4, 2};
        auto localResult = solution.minNumberOperations(target);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> target = {1, 1, 1, 1};
        auto localResult = solution.minNumberOperations(target);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
