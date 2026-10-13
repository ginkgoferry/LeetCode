/*
 * Problem: 2611. 老鼠和奶酪 / Mice and Cheese
 * Link: https://leetcode.cn/problems/mice-and-cheese/
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
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        // TODO: 在这里实现你的解法。
        (void)reward1;
        (void)reward2;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> reward1 = {1, 1, 3, 4};
        vector<int> reward2 = {4, 4, 1, 1};
        int k = 2;
        auto localResult = solution.miceAndCheese(reward1, reward2, k);
        int expected = 15;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> reward1 = {1, 1};
        vector<int> reward2 = {1, 1};
        int k = 2;
        auto localResult = solution.miceAndCheese(reward1, reward2, k);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
