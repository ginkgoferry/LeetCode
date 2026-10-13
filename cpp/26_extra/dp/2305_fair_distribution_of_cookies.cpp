/*
 * Problem: 2305. 公平分发饼干 / Fair Distribution of Cookies
 * Link: https://leetcode.cn/problems/fair-distribution-of-cookies/
 * Chapter: 动态规划
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
    int distributeCookies(vector<int>& cookies, int k) {
        // TODO: 在这里实现你的解法。
        (void)cookies;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> cookies = {8, 15, 10, 20, 8};
        int k = 2;
        auto localResult = solution.distributeCookies(cookies, k);
        int expected = 31;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cookies = {6, 1, 3, 2, 2, 4, 1, 2};
        int k = 3;
        auto localResult = solution.distributeCookies(cookies, k);
        int expected = 7;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
