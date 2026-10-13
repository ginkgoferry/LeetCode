/*
 * Problem: 2844. 生成特殊数字的最少操作 / Minimum Operations to Make a Special Number
 * Link: https://leetcode.cn/problems/minimum-operations-to-make-a-special-number/
 * Chapter: 贪心算法
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
    int minimumOperations(string num) {
        // TODO: 在这里实现你的解法。
        (void)num;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string num = "2245047";
        auto localResult = solution.minimumOperations(num);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "2908305";
        auto localResult = solution.minimumOperations(num);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "10";
        auto localResult = solution.minimumOperations(num);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
