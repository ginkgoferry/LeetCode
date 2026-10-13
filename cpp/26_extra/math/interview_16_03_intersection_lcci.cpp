/*
 * Problem: 面试题 16.03. 交点 / Intersection LCCI
 * Link: https://leetcode.cn/problems/intersection-lcci/
 * Chapter: 数学
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
    vector<double> intersection(vector<int>& start1, vector<int>& end1, vector<int>& start2, vector<int>& end2) {
        // TODO: 在这里实现你的解法。
        (void)start1;
        (void)end1;
        (void)start2;
        (void)end2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> start1 = {0, 0};
        vector<int> end1 = {1, 0};
        vector<int> start2 = {1, 1};
        vector<int> end2 = {0, -1};
        auto localResult = solution.intersection(start1, end1, start2, end2);
        vector<double> expected = {0.5, 0};
        assert((approxEqual(localResult, expected, 1e-6)));
    }

    {
        // 官方样例
        vector<int> start1 = {0, 0};
        vector<int> end1 = {3, 3};
        vector<int> start2 = {1, 1};
        vector<int> end2 = {2, 2};
        auto localResult = solution.intersection(start1, end1, start2, end2);
        vector<double> expected = {1, 1};
        assert((approxEqual(localResult, expected, 1e-6)));
    }

    {
        // 官方样例
        vector<int> start1 = {0, 0};
        vector<int> end1 = {1, 1};
        vector<int> start2 = {1, 0};
        vector<int> end2 = {2, 1};
        auto localResult = solution.intersection(start1, end1, start2, end2);
        vector<double> expected = {};
        assert((approxEqual(localResult, expected, 1e-6)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
