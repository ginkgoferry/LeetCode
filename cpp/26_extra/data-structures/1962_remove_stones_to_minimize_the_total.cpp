/*
 * Problem: 1962. 移除石子使总数最小 / Remove Stones to Minimize the Total
 * Link: https://leetcode.cn/problems/remove-stones-to-minimize-the-total/
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
    int minStoneSum(vector<int>& piles, int k) {
        // TODO: 在这里实现你的解法。
        (void)piles;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> piles = {5, 4, 9};
        int k = 2;
        auto localResult = solution.minStoneSum(piles, k);
        int expected = 12;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> piles = {4, 3, 6, 7};
        int k = 3;
        auto localResult = solution.minStoneSum(piles, k);
        int expected = 12;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
