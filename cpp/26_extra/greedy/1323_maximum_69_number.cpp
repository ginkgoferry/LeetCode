/*
 * Problem: 1323. 6 和 9 组成的最大数字 / Maximum 69 Number
 * Link: https://leetcode.cn/problems/maximum-69-number/
 * Chapter: 贪心算法
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
    int maximum69Number (int num) {
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
        int num = 9669;
        auto localResult = solution.maximum69Number (num);
        int expected = 9969;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 9996;
        auto localResult = solution.maximum69Number (num);
        int expected = 9999;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 9999;
        auto localResult = solution.maximum69Number (num);
        int expected = 9999;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
