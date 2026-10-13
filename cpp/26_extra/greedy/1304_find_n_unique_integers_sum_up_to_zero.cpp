/*
 * Problem: 1304. 和为零的 N 个不同整数 / Find N Unique Integers Sum up to Zero
 * Link: https://leetcode.cn/problems/find-n-unique-integers-sum-up-to-zero/
 * Chapter: 贪心算法
 * Difficulty: Easy
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
    vector<int> sumZero(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        auto localResult = solution.sumZero(n);
        assert(localResult.size() == static_cast<size_t>(n));
        assert(set<int>(localResult.begin(), localResult.end()).size() == localResult.size());
        assert(accumulate(localResult.begin(), localResult.end(), 0LL) == 0);
    }

    {
        // 官方样例
        int n = 3;
        auto localResult = solution.sumZero(n);
        assert(localResult.size() == static_cast<size_t>(n));
        assert(set<int>(localResult.begin(), localResult.end()).size() == localResult.size());
        assert(accumulate(localResult.begin(), localResult.end(), 0LL) == 0);
    }

    {
        // 官方样例
        int n = 1;
        auto localResult = solution.sumZero(n);
        assert(localResult.size() == static_cast<size_t>(n));
        assert(set<int>(localResult.begin(), localResult.end()).size() == localResult.size());
        assert(accumulate(localResult.begin(), localResult.end(), 0LL) == 0);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
