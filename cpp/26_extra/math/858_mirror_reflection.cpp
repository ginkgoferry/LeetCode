/*
 * Problem: 858. 镜面反射 / Mirror Reflection
 * Link: https://leetcode.cn/problems/mirror-reflection/
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
    int mirrorReflection(int p, int q) {
        // TODO: 在这里实现你的解法。
        (void)p;
        (void)q;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int p = 2;
        int q = 1;
        auto localResult = solution.mirrorReflection(p, q);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int p = 3;
        int q = 1;
        auto localResult = solution.mirrorReflection(p, q);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
