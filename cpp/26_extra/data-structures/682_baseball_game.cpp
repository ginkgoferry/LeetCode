/*
 * Problem: 682. 棒球比赛 / Baseball Game
 * Link: https://leetcode.cn/problems/baseball-game/
 * Chapter: 数据结构
 * Difficulty: Easy
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
    int calPoints(vector<string>& operations) {
        // TODO: 在这里实现你的解法。
        (void)operations;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> operations = {"5", "2", "C", "D", "+"};
        auto localResult = solution.calPoints(operations);
        int expected = 30;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> operations = {"5", "-2", "4", "C", "D", "9", "+", "+"};
        auto localResult = solution.calPoints(operations);
        int expected = 27;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> operations = {"1"};
        auto localResult = solution.calPoints(operations);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
