/*
 * Problem: 836. 矩形重叠 / Rectangle Overlap
 * Link: https://leetcode.cn/problems/rectangle-overlap/
 * Chapter: 数学
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
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // TODO: 在这里实现你的解法。
        (void)rec1;
        (void)rec2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> rec1 = {0, 0, 2, 2};
        vector<int> rec2 = {1, 1, 3, 3};
        auto localResult = solution.isRectangleOverlap(rec1, rec2);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> rec1 = {0, 0, 1, 1};
        vector<int> rec2 = {1, 0, 2, 1};
        auto localResult = solution.isRectangleOverlap(rec1, rec2);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> rec1 = {0, 0, 1, 1};
        vector<int> rec2 = {2, 2, 3, 3};
        auto localResult = solution.isRectangleOverlap(rec1, rec2);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
