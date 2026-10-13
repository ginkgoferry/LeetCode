/*
 * Problem: 2612. 最少翻转操作数 / Minimum Reverse Operations
 * Link: https://leetcode.cn/problems/minimum-reverse-operations/
 * Chapter: 图论
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
    vector<int> minReverseOperations(int n, int p, vector<int>& banned, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)p;
        (void)banned;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        int p = 0;
        vector<int> banned = {1, 2};
        int k = 4;
        auto localResult = solution.minReverseOperations(n, p, banned, k);
        vector<int> expected = {0, -1, -1, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int p = 0;
        vector<int> banned = {2, 4};
        int k = 3;
        auto localResult = solution.minReverseOperations(n, p, banned, k);
        vector<int> expected = {0, -1, -1, -1, -1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        int p = 2;
        vector<int> banned = {0, 1, 3};
        int k = 1;
        auto localResult = solution.minReverseOperations(n, p, banned, k);
        vector<int> expected = {-1, -1, 0, -1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
