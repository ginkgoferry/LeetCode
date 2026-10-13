/*
 * Problem: 2127. 参加会议的最多员工数 / Maximum Employees to Be Invited to a Meeting
 * Link: https://leetcode.cn/problems/maximum-employees-to-be-invited-to-a-meeting/
 * Chapter: 图论
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
    int maximumInvitations(vector<int>& favorite) {
        // TODO: 在这里实现你的解法。
        (void)favorite;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> favorite = {2, 2, 1, 2};
        auto localResult = solution.maximumInvitations(favorite);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> favorite = {1, 2, 0};
        auto localResult = solution.maximumInvitations(favorite);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> favorite = {3, 0, 1, 4, 1};
        auto localResult = solution.maximumInvitations(favorite);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
