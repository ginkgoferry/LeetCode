/*
 * Problem: 3075. 幸福值最大化的选择方案 / Maximize Happiness of Selected Children
 * Link: https://leetcode.cn/problems/maximize-happiness-of-selected-children/
 * Chapter: 贪心算法
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
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        // TODO: 在这里实现你的解法。
        (void)happiness;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> happiness = {1, 2, 3};
        int k = 2;
        auto localResult = solution.maximumHappinessSum(happiness, k);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> happiness = {1, 1, 1, 1};
        int k = 2;
        auto localResult = solution.maximumHappinessSum(happiness, k);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> happiness = {2, 3, 4, 5};
        int k = 1;
        auto localResult = solution.maximumHappinessSum(happiness, k);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
