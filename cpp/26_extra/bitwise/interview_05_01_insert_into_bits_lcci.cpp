/*
 * Problem: 面试题 05.01. 插入 / Insert Into Bits LCCI
 * Link: https://leetcode.cn/problems/insert-into-bits-lcci/
 * Chapter: 位运算
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
    int insertBits(int N, int M, int i, int j) {
        // TODO: 在这里实现你的解法。
        (void)N;
        (void)M;
        (void)i;
        (void)j;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int N = 1024;
        int M = 19;
        int i = 2;
        int j = 6;
        auto localResult = solution.insertBits(N, M, i, j);
        int expected = 1100;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int N = 0;
        int M = 31;
        int i = 0;
        int j = 4;
        auto localResult = solution.insertBits(N, M, i, j);
        int expected = 31;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
