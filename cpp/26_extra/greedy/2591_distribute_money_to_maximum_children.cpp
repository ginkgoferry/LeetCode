/*
 * Problem: 2591. 将钱分给最多的儿童 / Distribute Money to Maximum Children
 * Link: https://leetcode.cn/problems/distribute-money-to-maximum-children/
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
    int distMoney(int money, int children) {
        // TODO: 在这里实现你的解法。
        (void)money;
        (void)children;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int money = 20;
        int children = 3;
        auto localResult = solution.distMoney(money, children);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int money = 16;
        int children = 2;
        auto localResult = solution.distMoney(money, children);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
