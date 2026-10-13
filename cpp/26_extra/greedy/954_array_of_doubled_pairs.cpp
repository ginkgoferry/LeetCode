/*
 * Problem: 954. 二倍数对数组 / Array of Doubled Pairs
 * Link: https://leetcode.cn/problems/array-of-doubled-pairs/
 * Chapter: 贪心算法
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
    bool canReorderDoubled(vector<int>& arr) {
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
        vector<int> arr = {3, 1, 3, 6};
        auto localResult = solution.canReorderDoubled(arr);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {2, 1, 2, 6};
        auto localResult = solution.canReorderDoubled(arr);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {4, -2, 2, -4};
        auto localResult = solution.canReorderDoubled(arr);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
