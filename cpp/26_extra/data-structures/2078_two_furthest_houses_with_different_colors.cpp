/*
 * Problem: 2078. 两栋颜色不同且距离最远的房子 / Two Furthest Houses With Different Colors
 * Link: https://leetcode.cn/problems/two-furthest-houses-with-different-colors/
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
    int maxDistance(vector<int>& colors) {
        // TODO: 在这里实现你的解法。
        (void)colors;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> colors = {1, 1, 1, 6, 1, 1, 1};
        auto localResult = solution.maxDistance(colors);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> colors = {1, 8, 3, 8, 3};
        auto localResult = solution.maxDistance(colors);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> colors = {0, 1};
        auto localResult = solution.maxDistance(colors);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
