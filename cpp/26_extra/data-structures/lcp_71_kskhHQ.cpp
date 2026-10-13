/*
 * Problem: LCP 71. 集水器 / 集水器
 * Link: https://leetcode.cn/problems/kskhHQ/
 * Chapter: 数据结构
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
    int reservoir(vector<string>& shape) {
        // TODO: 在这里实现你的解法。
        (void)shape;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> shape = {"....rl", "l.lr.r", ".l..r.", "..lr.."};
        auto localResult = solution.reservoir(shape);
        int expected = 18;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> shape = {".rlrlrlrl", "ll..rl..r", ".llrrllrr", "..lr..lr."};
        auto localResult = solution.reservoir(shape);
        int expected = 18;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> shape = {"rlrr", "llrl", "llr."};
        auto localResult = solution.reservoir(shape);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> shape = {"...rl...", "..r..l..", ".r.rl.l.", "r.r..l.l", "l.l..rl.", ".l.lr.r.", "..l..r..", "...lr..."};
        auto localResult = solution.reservoir(shape);
        int expected = 30;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
