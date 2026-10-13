/*
 * Problem: LCP 68. 美观的花束 / 美观的花束
 * Link: https://leetcode.cn/problems/1GxJYY/
 * Chapter: 滑动窗口
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
    int beautifulBouquet(vector<int>& flowers, int cnt) {
        // TODO: 在这里实现你的解法。
        (void)flowers;
        (void)cnt;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> flowers = {1, 2, 3, 2};
        int cnt = 1;
        auto localResult = solution.beautifulBouquet(flowers, cnt);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> flowers = {5, 3, 3, 3};
        int cnt = 2;
        auto localResult = solution.beautifulBouquet(flowers, cnt);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> flowers = {1};
        int cnt = 1;
        auto localResult = solution.beautifulBouquet(flowers, cnt);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
