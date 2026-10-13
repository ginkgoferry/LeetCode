/*
 * Problem: 372. 超级次方 / Super Pow
 * Link: https://leetcode.cn/problems/super-pow/
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
    int superPow(int a, vector<int>& b) {
        // TODO: 在这里实现你的解法。
        (void)a;
        (void)b;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int a = 2;
        vector<int> b = {3};
        auto localResult = solution.superPow(a, b);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int a = 2;
        vector<int> b = {1, 0};
        auto localResult = solution.superPow(a, b);
        int expected = 1024;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int a = 1;
        vector<int> b = {4, 3, 3, 8, 5, 2};
        auto localResult = solution.superPow(a, b);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
