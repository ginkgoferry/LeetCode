/*
 * Problem: 675. 为高尔夫比赛砍树 / Cut Off Trees for Golf Event
 * Link: https://leetcode.cn/problems/cut-off-trees-for-golf-event/
 * Chapter: 网格图
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
    int cutOffTree(vector<vector<int>>& forest) {
        // TODO: 在这里实现你的解法。
        (void)forest;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> forest = {{1, 2, 3}, {0, 0, 4}, {7, 6, 5}};
        auto localResult = solution.cutOffTree(forest);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> forest = {{1, 2, 3}, {0, 0, 0}, {7, 6, 5}};
        auto localResult = solution.cutOffTree(forest);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> forest = {{2, 3, 4}, {0, 0, 5}, {8, 7, 6}};
        auto localResult = solution.cutOffTree(forest);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
