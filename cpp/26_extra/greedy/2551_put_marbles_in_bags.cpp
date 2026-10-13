/*
 * Problem: 2551. 将珠子放入背包中 / Put Marbles in Bags
 * Link: https://leetcode.cn/problems/put-marbles-in-bags/
 * Chapter: 贪心算法
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
    long long putMarbles(vector<int>& weights, int k) {
        // TODO: 在这里实现你的解法。
        (void)weights;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> weights = {1, 3, 5, 1};
        int k = 2;
        auto localResult = solution.putMarbles(weights, k);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> weights = {1, 3};
        int k = 2;
        auto localResult = solution.putMarbles(weights, k);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
