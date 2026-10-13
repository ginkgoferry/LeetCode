/*
 * Problem: 1388. 3n 块披萨 / Pizza With 3n Slices
 * Link: https://leetcode.cn/problems/pizza-with-3n-slices/
 * Chapter: 动态规划
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
    int maxSizeSlices(vector<int>& slices) {
        // TODO: 在这里实现你的解法。
        (void)slices;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> slices = {1, 2, 3, 4, 5, 6};
        auto localResult = solution.maxSizeSlices(slices);
        int expected = 10;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> slices = {8, 9, 8, 6, 1, 1};
        auto localResult = solution.maxSizeSlices(slices);
        int expected = 16;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
