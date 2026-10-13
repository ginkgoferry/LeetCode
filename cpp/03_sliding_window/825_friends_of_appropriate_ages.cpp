/*
 * Problem: 825. 适龄的朋友 / Friends Of Appropriate Ages
 * Link: https://leetcode.cn/problems/friends-of-appropriate-ages/
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
    int numFriendRequests(vector<int>& ages) {
        // TODO: 在这里实现你的解法。
        (void)ages;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> ages = {16, 16};
        auto localResult = solution.numFriendRequests(ages);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> ages = {16, 17, 18};
        auto localResult = solution.numFriendRequests(ages);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> ages = {20, 30, 100, 110, 120};
        auto localResult = solution.numFriendRequests(ages);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
