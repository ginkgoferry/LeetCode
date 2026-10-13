/*
 * Problem: 3796. 找到带限制序列的最大值 / Find Maximum Value in a Constrained Sequence
 * Link: https://leetcode.cn/problems/find-maximum-value-in-a-constrained-sequence/
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
    int findMaxVal(int n, vector<vector<int>>& restrictions, vector<int>& diff) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)restrictions;
        (void)diff;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 10;
        vector<vector<int>> restrictions = {{3, 1}, {8, 1}};
        vector<int> diff = {2, 2, 3, 1, 4, 5, 1, 1, 2};
        auto localResult = solution.findMaxVal(n, restrictions, diff);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 8;
        vector<vector<int>> restrictions = {{3, 2}};
        vector<int> diff = {3, 5, 2, 4, 2, 3, 1};
        auto localResult = solution.findMaxVal(n, restrictions, diff);
        int expected = 12;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
