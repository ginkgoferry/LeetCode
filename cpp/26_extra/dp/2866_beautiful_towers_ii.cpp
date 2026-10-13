/*
 * Problem: 2866. 美丽塔 II / Beautiful Towers II
 * Link: https://leetcode.cn/problems/beautiful-towers-ii/
 * Chapter: 栈
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
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        // TODO: 在这里实现你的解法。
        (void)maxHeights;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> maxHeights = {5, 3, 4, 1, 1};
        auto localResult = solution.maximumSumOfHeights(maxHeights);
        long long expected = 13LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> maxHeights = {6, 5, 3, 9, 2, 7};
        auto localResult = solution.maximumSumOfHeights(maxHeights);
        long long expected = 22LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> maxHeights = {3, 2, 5, 5, 2, 3};
        auto localResult = solution.maximumSumOfHeights(maxHeights);
        long long expected = 18LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
