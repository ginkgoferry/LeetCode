/*
 * Problem: 2453. 摧毁一系列目标 / Destroy Sequential Targets
 * Link: https://leetcode.cn/problems/destroy-sequential-targets/
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
    int destroyTargets(vector<int>& nums, int space) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)space;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {3, 7, 8, 1, 1, 5};
        int space = 2;
        auto localResult = solution.destroyTargets(nums, space);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 3, 5, 2, 4, 6};
        int space = 2;
        auto localResult = solution.destroyTargets(nums, space);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {6, 2, 5};
        int space = 100;
        auto localResult = solution.destroyTargets(nums, space);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
