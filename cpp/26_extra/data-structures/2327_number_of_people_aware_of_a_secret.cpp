/*
 * Problem: 2327. 知道秘密的人数 / Number of People Aware of a Secret
 * Link: https://leetcode.cn/problems/number-of-people-aware-of-a-secret/
 * Chapter: 动态规划
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
    int peopleAwareOfSecret(int n, int delay, int forget) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)delay;
        (void)forget;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 6;
        int delay = 2;
        int forget = 4;
        auto localResult = solution.peopleAwareOfSecret(n, delay, forget);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        int delay = 1;
        int forget = 3;
        auto localResult = solution.peopleAwareOfSecret(n, delay, forget);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
