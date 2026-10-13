/*
 * Problem: 1395. 统计作战单位数 / Count Number of Teams
 * Link: https://leetcode.cn/problems/count-number-of-teams/
 * Chapter: 数据结构
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
    int numTeams(vector<int>& rating) {
        // TODO: 在这里实现你的解法。
        (void)rating;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> rating = {2, 5, 3, 4, 1};
        auto localResult = solution.numTeams(rating);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> rating = {2, 1, 3};
        auto localResult = solution.numTeams(rating);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> rating = {1, 2, 3, 4};
        auto localResult = solution.numTeams(rating);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
