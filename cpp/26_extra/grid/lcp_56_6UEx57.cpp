/*
 * Problem: LCP 56. 信物传送 / 信物传送
 * Link: https://leetcode.cn/problems/6UEx57/
 * Chapter: 网格图
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
    int conveyorBelt(vector<string>& matrix, vector<int>& start, vector<int>& end) {
        // TODO: 在这里实现你的解法。
        (void)matrix;
        (void)start;
        (void)end;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> matrix = {">>v", "v^<", "<><"};
        vector<int> start = {0, 1};
        vector<int> end = {2, 0};
        auto localResult = solution.conveyorBelt(matrix, start, end);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> matrix = {">>v", ">>v", "^<<"};
        vector<int> start = {0, 0};
        vector<int> end = {1, 1};
        auto localResult = solution.conveyorBelt(matrix, start, end);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> matrix = {">^^>", "<^v>", "^v^<"};
        vector<int> start = {0, 0};
        vector<int> end = {1, 3};
        auto localResult = solution.conveyorBelt(matrix, start, end);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
