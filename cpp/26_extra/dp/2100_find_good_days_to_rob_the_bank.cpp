/*
 * Problem: 2100. 适合野炊的日子 / Find Good Days to Rob the Bank
 * Link: https://leetcode.cn/problems/find-good-days-to-rob-the-bank/
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
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        // TODO: 在这里实现你的解法。
        (void)security;
        (void)time;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> security = {5, 3, 3, 3, 5, 6, 2};
        int time = 2;
        auto localResult = solution.goodDaysToRobBank(security, time);
        vector<int> expected = {2, 3};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> security = {1, 1, 1, 1, 1};
        int time = 0;
        auto localResult = solution.goodDaysToRobBank(security, time);
        vector<int> expected = {0, 1, 2, 3, 4};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> security = {1, 2, 3, 4, 5, 6};
        int time = 2;
        auto localResult = solution.goodDaysToRobBank(security, time);
        vector<int> expected = {};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
