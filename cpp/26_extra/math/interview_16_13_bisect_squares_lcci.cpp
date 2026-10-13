/*
 * Problem: 面试题 16.13. 平分正方形 / Bisect Squares LCCI
 * Link: https://leetcode.cn/problems/bisect-squares-lcci/
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
    vector<double> cutSquares(vector<int>& square1, vector<int>& square2) {
        // TODO: 在这里实现你的解法。
        (void)square1;
        (void)square2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> square1 = {-1, -1, 2};
        vector<int> square2 = {0, -1, 2};
        auto localResult = solution.cutSquares(square1, square2);
        vector<double> expected = {-1, 0, 2, 0};
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
