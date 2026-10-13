/*
 * Problem: LCP 70. 沙地治理 / 沙地治理
 * Link: https://leetcode.cn/problems/XxZZjK/
 * Chapter: 贪心算法
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
    vector<vector<int>> sandyLandManagement(int size) {
        // TODO: 在这里实现你的解法。
        (void)size;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int size = 3;
        auto localResult = solution.sandyLandManagement(size);
        vector<vector<int>> expected = {{1, 1}, {2, 1}, {2, 3}, {3, 1}, {3, 5}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int size = 2;
        auto localResult = solution.sandyLandManagement(size);
        vector<vector<int>> expected = {{1, 1}, {2, 1}, {2, 3}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
