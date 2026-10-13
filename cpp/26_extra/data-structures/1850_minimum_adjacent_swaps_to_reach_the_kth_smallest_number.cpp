/*
 * Problem: 1850. 邻位交换的最小次数 / Minimum Adjacent Swaps to Reach the Kth Smallest Number
 * Link: https://leetcode.cn/problems/minimum-adjacent-swaps-to-reach-the-kth-smallest-number/
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
    int getMinSwaps(string num, int k) {
        // TODO: 在这里实现你的解法。
        (void)num;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string num = "5489355142";
        int k = 4;
        auto localResult = solution.getMinSwaps(num, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "11112";
        int k = 4;
        auto localResult = solution.getMinSwaps(num, k);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "00123";
        int k = 1;
        auto localResult = solution.getMinSwaps(num, k);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
