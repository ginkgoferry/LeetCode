/*
 * Problem: 593. 有效的正方形 / Valid Square
 * Link: https://leetcode.cn/problems/valid-square/
 * Chapter: 数学
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
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        // TODO: 在这里实现你的解法。
        (void)p1;
        (void)p2;
        (void)p3;
        (void)p4;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> p1 = {0, 0};
        vector<int> p2 = {1, 1};
        vector<int> p3 = {1, 0};
        vector<int> p4 = {0, 1};
        auto localResult = solution.validSquare(p1, p2, p3, p4);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> p1 = {0, 0};
        vector<int> p2 = {1, 1};
        vector<int> p3 = {1, 0};
        vector<int> p4 = {0, 12};
        auto localResult = solution.validSquare(p1, p2, p3, p4);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> p1 = {1, 0};
        vector<int> p2 = {-1, 0};
        vector<int> p3 = {0, 1};
        vector<int> p4 = {0, -1};
        auto localResult = solution.validSquare(p1, p2, p3, p4);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
