/*
 * Problem: 2513. 最小化两个数组中的最大值 / Minimize the Maximum of Two Arrays
 * Link: https://leetcode.cn/problems/minimize-the-maximum-of-two-arrays/
 * Chapter: 二分查找
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
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        // TODO: 在这里实现你的解法。
        (void)divisor1;
        (void)divisor2;
        (void)uniqueCnt1;
        (void)uniqueCnt2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int divisor1 = 2;
        int divisor2 = 7;
        int uniqueCnt1 = 1;
        int uniqueCnt2 = 3;
        auto localResult = solution.minimizeSet(divisor1, divisor2, uniqueCnt1, uniqueCnt2);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int divisor1 = 3;
        int divisor2 = 5;
        int uniqueCnt1 = 2;
        int uniqueCnt2 = 1;
        auto localResult = solution.minimizeSet(divisor1, divisor2, uniqueCnt1, uniqueCnt2);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int divisor1 = 2;
        int divisor2 = 4;
        int uniqueCnt1 = 8;
        int uniqueCnt2 = 2;
        auto localResult = solution.minimizeSet(divisor1, divisor2, uniqueCnt1, uniqueCnt2);
        int expected = 15;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
