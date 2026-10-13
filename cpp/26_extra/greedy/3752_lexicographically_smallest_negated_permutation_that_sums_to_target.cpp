/*
 * Problem: 3752. 字典序最小和为目标值且绝对值是排列的数组 / Lexicographically Smallest Negated Permutation that Sums to Target
 * Link: https://leetcode.cn/problems/lexicographically-smallest-negated-permutation-that-sums-to-target/
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
    vector<int> lexSmallestNegatedPerm(int n, long long target) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        long long target = 0LL;
        auto localResult = solution.lexSmallestNegatedPerm(n, target);
        vector<int> expected = {-3, 1, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 1;
        long long target = 10000000000LL;
        auto localResult = solution.lexSmallestNegatedPerm(n, target);
        vector<int> expected = {};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
