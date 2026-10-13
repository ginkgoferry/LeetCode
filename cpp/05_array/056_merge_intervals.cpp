/*
 * Problem: 56. 合并区间 / Merge Intervals
 * Link: https://leetcode.cn/problems/merge-intervals/
 * Chapter: 普通数组
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
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // TODO: 在这里实现你的解法。
        (void)intervals;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
        assert((solution.merge(intervals) == vector<vector<int>>{{1, 6}, {8, 10}, {15, 18}}));
    }

    {
        vector<vector<int>> intervals = {{1, 4}, {4, 5}};
        assert((solution.merge(intervals) == vector<vector<int>>{{1, 5}}));
    }

    {
        vector<vector<int>> intervals = {{4, 7}, {1, 4}};
        assert((solution.merge(intervals) == vector<vector<int>>{{1, 7}}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
