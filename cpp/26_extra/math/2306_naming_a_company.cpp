/*
 * Problem: 2306. 公司命名 / Naming a Company
 * Link: https://leetcode.cn/problems/naming-a-company/
 * Chapter: 数学
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
    long long distinctNames(vector<string>& ideas) {
        // TODO: 在这里实现你的解法。
        (void)ideas;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> ideas = {"coffee", "donuts", "time", "toffee"};
        auto localResult = solution.distinctNames(ideas);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> ideas = {"lack", "back"};
        auto localResult = solution.distinctNames(ideas);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
