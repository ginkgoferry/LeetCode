/*
 * Problem: 455. 分发饼干 / Assign Cookies
 * Link: https://leetcode.cn/problems/assign-cookies/
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
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // TODO: 在这里实现你的解法。
        (void)g;
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> g = {1, 2, 3};
        vector<int> s = {1, 1};
        auto localResult = solution.findContentChildren(g, s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> g = {1, 2};
        vector<int> s = {1, 2, 3};
        auto localResult = solution.findContentChildren(g, s);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
