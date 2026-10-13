/*
 * Problem: 835. 图像重叠 / Image Overlap
 * Link: https://leetcode.cn/problems/image-overlap/
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
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        // TODO: 在这里实现你的解法。
        (void)img1;
        (void)img2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> img1 = {{1, 1, 0}, {0, 1, 0}, {0, 1, 0}};
        vector<vector<int>> img2 = {{0, 0, 0}, {0, 1, 1}, {0, 0, 1}};
        auto localResult = solution.largestOverlap(img1, img2);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> img1 = {{1}};
        vector<vector<int>> img2 = {{1}};
        auto localResult = solution.largestOverlap(img1, img2);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> img1 = {{0}};
        vector<vector<int>> img2 = {{0}};
        auto localResult = solution.largestOverlap(img1, img2);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
