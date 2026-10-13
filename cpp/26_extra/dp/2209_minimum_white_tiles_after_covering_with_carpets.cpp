/*
 * Problem: 2209. 用地毯覆盖后的最少白色砖块 / Minimum White Tiles After Covering With Carpets
 * Link: https://leetcode.cn/problems/minimum-white-tiles-after-covering-with-carpets/
 * Chapter: 动态规划
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
    int minimumWhiteTiles(string floor, int numCarpets, int carpetLen) {
        // TODO: 在这里实现你的解法。
        (void)floor;
        (void)numCarpets;
        (void)carpetLen;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string floor = "10110101";
        int numCarpets = 2;
        int carpetLen = 2;
        auto localResult = solution.minimumWhiteTiles(floor, numCarpets, carpetLen);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string floor = "11111";
        int numCarpets = 2;
        int carpetLen = 3;
        auto localResult = solution.minimumWhiteTiles(floor, numCarpets, carpetLen);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
