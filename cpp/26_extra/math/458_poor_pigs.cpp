/*
 * Problem: 458. 可怜的小猪 / Poor Pigs
 * Link: https://leetcode.cn/problems/poor-pigs/
 * Chapter: 数学
 * Difficulty: Hard
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
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        // TODO: 在这里实现你的解法。
        (void)buckets;
        (void)minutesToDie;
        (void)minutesToTest;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int buckets = 1000;
        int minutesToDie = 15;
        int minutesToTest = 60;
        auto localResult = solution.poorPigs(buckets, minutesToDie, minutesToTest);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int buckets = 4;
        int minutesToDie = 15;
        int minutesToTest = 15;
        auto localResult = solution.poorPigs(buckets, minutesToDie, minutesToTest);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int buckets = 4;
        int minutesToDie = 15;
        int minutesToTest = 30;
        auto localResult = solution.poorPigs(buckets, minutesToDie, minutesToTest);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
