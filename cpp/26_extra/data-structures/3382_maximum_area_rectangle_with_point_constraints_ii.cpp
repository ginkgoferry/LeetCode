/*
 * Problem: 3382. 用点构造面积最大的矩形 II / Maximum Area Rectangle With Point Constraints II
 * Link: https://leetcode.cn/problems/maximum-area-rectangle-with-point-constraints-ii/
 * Chapter: 数据结构
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
    long long maxRectangleArea(vector<int>& xCoord, vector<int>& yCoord) {
        // TODO: 在这里实现你的解法。
        (void)xCoord;
        (void)yCoord;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> xCoord = {1, 1, 3, 3};
        vector<int> yCoord = {1, 3, 1, 3};
        auto localResult = solution.maxRectangleArea(xCoord, yCoord);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> xCoord = {1, 1, 3, 3, 2};
        vector<int> yCoord = {1, 3, 1, 3, 2};
        auto localResult = solution.maxRectangleArea(xCoord, yCoord);
        long long expected = -1LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> xCoord = {1, 1, 3, 3, 1, 3};
        vector<int> yCoord = {1, 3, 1, 3, 2, 2};
        auto localResult = solution.maxRectangleArea(xCoord, yCoord);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
