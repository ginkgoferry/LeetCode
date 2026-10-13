/*
 * Problem: LCP 82. 万灵之树 / 万灵之树
 * Link: https://leetcode.cn/problems/cnHoX6/
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
    int treeOfInfiniteSouls(vector<int>& gem, int p, int target) {
        // TODO: 在这里实现你的解法。
        (void)gem;
        (void)p;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> gem = {2, 3};
        int p = 100000007;
        int target = 11391299;
        auto localResult = solution.treeOfInfiniteSouls(gem, p, target);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> gem = {3, 21, 3};
        int p = 7;
        int target = 5;
        auto localResult = solution.treeOfInfiniteSouls(gem, p, target);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
