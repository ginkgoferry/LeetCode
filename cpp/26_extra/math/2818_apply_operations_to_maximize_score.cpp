/*
 * Problem: 2818. 操作使得分最大 / Apply Operations to Maximize Score
 * Link: https://leetcode.cn/problems/apply-operations-to-maximize-score/
 * Chapter: 栈
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
    int maximumScore(vector<int>& nums, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {8, 3, 9, 3, 8};
        int k = 2;
        auto localResult = solution.maximumScore(nums, k);
        int expected = 81;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {19, 12, 14, 6, 10, 18};
        int k = 3;
        auto localResult = solution.maximumScore(nums, k);
        int expected = 4788;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
