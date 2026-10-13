/*
 * Problem: 51. N 皇后 / N-Queens
 * Link: https://leetcode.cn/problems/n-queens/
 * Chapter: 回溯
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
    vector<vector<string>> solveNQueens(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        int n = 4;
        assert((sortedOuter(solution.solveNQueens(n)) == sortedOuter(vector<vector<string>>{{".Q..", "...Q", "Q...", "..Q."}, {"..Q.", "Q...", "...Q", ".Q.."}})));
    }

    {
        int n = 1;
        assert((sortedOuter(solution.solveNQueens(n)) == sortedOuter(vector<vector<string>>{{"Q"}})));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
