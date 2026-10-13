/*
 * Problem: LCP 59. 搭桥过河 / 搭桥过河
 * Link: https://leetcode.cn/problems/NfY1m5/
 * Chapter: 动态规划
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
    long long buildBridge(int num, vector<vector<int>>& wood) {
        // TODO: 在这里实现你的解法。
        (void)num;
        (void)wood;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int num = 10;
        vector<vector<int>> wood = {{1, 2}, {4, 7}, {8, 9}};
        auto localResult = solution.buildBridge(num, wood);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 10;
        vector<vector<int>> wood = {{1, 5}, {1, 1}, {10, 10}, {6, 7}, {7, 8}};
        auto localResult = solution.buildBridge(num, wood);
        long long expected = 10LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 5;
        vector<vector<int>> wood = {{1, 2}, {2, 4}};
        auto localResult = solution.buildBridge(num, wood);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
