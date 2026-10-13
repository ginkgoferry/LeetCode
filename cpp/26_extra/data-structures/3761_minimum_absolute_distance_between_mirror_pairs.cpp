/*
 * Problem: 3761. 镜像对之间最小绝对距离 / Minimum Absolute Distance Between Mirror Pairs
 * Link: https://leetcode.cn/problems/minimum-absolute-distance-between-mirror-pairs/
 * Chapter: 数据结构
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
    int minMirrorPairDistance(vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {12, 21, 45, 33, 54};
        auto localResult = solution.minMirrorPairDistance(nums);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {120, 21};
        auto localResult = solution.minMirrorPairDistance(nums);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {21, 120};
        auto localResult = solution.minMirrorPairDistance(nums);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
