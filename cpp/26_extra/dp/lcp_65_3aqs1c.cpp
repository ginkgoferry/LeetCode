/*
 * Problem: LCP 65. 舒适的湿度 / 舒适的湿度
 * Link: https://leetcode.cn/problems/3aqs1c/
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
    int unSuitability(vector<int>& operate) {
        // TODO: 在这里实现你的解法。
        (void)operate;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> operate = {5, 3, 7};
        auto localResult = solution.unSuitability(operate);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> operate = {20, 10};
        auto localResult = solution.unSuitability(operate);
        int expected = 20;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
