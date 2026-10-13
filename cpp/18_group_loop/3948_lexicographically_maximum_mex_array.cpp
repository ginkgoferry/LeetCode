/*
 * Problem: 3948. 字典序最大的 MEX 数组 / Lexicographically Maximum MEX Array
 * Link: https://leetcode.cn/problems/lexicographically-maximum-mex-array/
 * Chapter: 分组循环
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
    vector<int> maximumMEX(vector<int>& nums) {
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
        vector<int> nums = {0, 1, 0};
        auto localResult = solution.maximumMEX(nums);
        vector<int> expected = {2, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 0, 2};
        auto localResult = solution.maximumMEX(nums);
        vector<int> expected = {3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 1};
        auto localResult = solution.maximumMEX(nums);
        vector<int> expected = {0, 0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
