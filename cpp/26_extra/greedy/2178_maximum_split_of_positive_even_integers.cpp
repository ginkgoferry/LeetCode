/*
 * Problem: 2178. 拆分成最多数目的正偶数之和 / Maximum Split of Positive Even Integers
 * Link: https://leetcode.cn/problems/maximum-split-of-positive-even-integers/
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
    vector<long long> maximumEvenSplit(long long finalSum) {
        // TODO: 在这里实现你的解法。
        (void)finalSum;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        long long finalSum = 12LL;
        auto localResult = solution.maximumEvenSplit(finalSum);
        vector<long long> expected = {2LL, 4LL, 6LL};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long finalSum = 7LL;
        auto localResult = solution.maximumEvenSplit(finalSum);
        vector<long long> expected = {};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long finalSum = 28LL;
        auto localResult = solution.maximumEvenSplit(finalSum);
        vector<long long> expected = {6LL, 8LL, 2LL, 12LL};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
