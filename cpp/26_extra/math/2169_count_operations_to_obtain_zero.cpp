/*
 * Problem: 2169. 得到 0 的操作数 / Count Operations to Obtain Zero
 * Link: https://leetcode.cn/problems/count-operations-to-obtain-zero/
 * Chapter: 数学
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
    int countOperations(int num1, int num2) {
        // TODO: 在这里实现你的解法。
        (void)num1;
        (void)num2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int num1 = 2;
        int num2 = 3;
        auto localResult = solution.countOperations(num1, num2);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num1 = 10;
        int num2 = 10;
        auto localResult = solution.countOperations(num1, num2);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
