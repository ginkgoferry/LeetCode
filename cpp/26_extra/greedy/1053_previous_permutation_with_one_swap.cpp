/*
 * Problem: 1053. 交换一次的先前排列 / Previous Permutation With One Swap
 * Link: https://leetcode.cn/problems/previous-permutation-with-one-swap/
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
    vector<int> prevPermOpt1(vector<int>& arr) {
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
        vector<int> arr = {3, 2, 1};
        auto localResult = solution.prevPermOpt1(arr);
        vector<int> expected = {3, 1, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 1, 5};
        auto localResult = solution.prevPermOpt1(arr);
        vector<int> expected = {1, 1, 5};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 9, 4, 6, 7};
        auto localResult = solution.prevPermOpt1(arr);
        vector<int> expected = {1, 7, 4, 6, 9};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
