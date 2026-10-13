/*
 * Problem: 1432. 改变一个整数能得到的最大差值 / Max Difference You Can Get From Changing an Integer
 * Link: https://leetcode.cn/problems/max-difference-you-can-get-from-changing-an-integer/
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
    int maxDiff(int num) {
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
        int num = 555;
        auto localResult = solution.maxDiff(num);
        int expected = 888;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 9;
        auto localResult = solution.maxDiff(num);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 123456;
        auto localResult = solution.maxDiff(num);
        int expected = 820000;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 10000;
        auto localResult = solution.maxDiff(num);
        int expected = 80000;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 9288;
        auto localResult = solution.maxDiff(num);
        int expected = 8700;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
