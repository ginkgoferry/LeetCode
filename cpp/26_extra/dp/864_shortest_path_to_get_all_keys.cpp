/*
 * Problem: 864. 获取所有钥匙的最短路径 / Shortest Path to Get All Keys
 * Link: https://leetcode.cn/problems/shortest-path-to-get-all-keys/
 * Chapter: 网格图
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
    int shortestPathAllKeys(vector<string>& grid) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> grid = {"@.a..", "###.#", "b.A.B"};
        auto localResult = solution.shortestPathAllKeys(grid);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> grid = {"@..aA", "..B#.", "....b"};
        auto localResult = solution.shortestPathAllKeys(grid);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> grid = {"@Aa"};
        auto localResult = solution.shortestPathAllKeys(grid);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
