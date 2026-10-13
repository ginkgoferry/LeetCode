/*
 * Problem: 514. 自由之路 / Freedom Trail
 * Link: https://leetcode.cn/problems/freedom-trail/
 * Chapter: 图论
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
    int findRotateSteps(string ring, string key) {
        // TODO: 在这里实现你的解法。
        (void)ring;
        (void)key;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string ring = "godding";
        string key = "gd";
        auto localResult = solution.findRotateSteps(ring, key);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string ring = "godding";
        string key = "godding";
        auto localResult = solution.findRotateSteps(ring, key);
        int expected = 13;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
