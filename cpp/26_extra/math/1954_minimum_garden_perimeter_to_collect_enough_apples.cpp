/*
 * Problem: 1954. 收集足够苹果的最小花园周长 / Minimum Garden Perimeter to Collect Enough Apples
 * Link: https://leetcode.cn/problems/minimum-garden-perimeter-to-collect-enough-apples/
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
    long long minimumPerimeter(long long neededApples) {
        // TODO: 在这里实现你的解法。
        (void)neededApples;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        long long neededApples = 1LL;
        auto localResult = solution.minimumPerimeter(neededApples);
        long long expected = 8LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long neededApples = 13LL;
        auto localResult = solution.minimumPerimeter(neededApples);
        long long expected = 16LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long neededApples = 1000000000LL;
        auto localResult = solution.minimumPerimeter(neededApples);
        long long expected = 5040LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
