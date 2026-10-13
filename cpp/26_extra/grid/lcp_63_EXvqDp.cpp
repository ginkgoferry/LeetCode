/*
 * Problem: LCP 63. 弹珠游戏 / 弹珠游戏
 * Link: https://leetcode.cn/problems/EXvqDp/
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
    vector<vector<int>> ballGame(int num, vector<string>& plate) {
        // TODO: 在这里实现你的解法。
        (void)num;
        (void)plate;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int num = 4;
        vector<string> plate = {"..E.", ".EOW", "..W."};
        auto localResult = solution.ballGame(num, plate);
        vector<vector<int>> expected = {{2, 1}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 5;
        vector<string> plate = {".....", "..E..", ".WO..", "....."};
        auto localResult = solution.ballGame(num, plate);
        vector<vector<int>> expected = {{0, 1}, {1, 0}, {2, 4}, {3, 2}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 3;
        vector<string> plate = {".....", "....O", "....O", "....."};
        auto localResult = solution.ballGame(num, plate);
        vector<vector<int>> expected = {};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
