/*
 * Problem: 881. 救生艇 / Boats to Save People
 * Link: https://leetcode.cn/problems/boats-to-save-people/
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
    int numRescueBoats(vector<int>& people, int limit) {
        // TODO: 在这里实现你的解法。
        (void)people;
        (void)limit;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> people = {1, 2};
        int limit = 3;
        auto localResult = solution.numRescueBoats(people, limit);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> people = {3, 2, 2, 1};
        int limit = 3;
        auto localResult = solution.numRescueBoats(people, limit);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> people = {3, 5, 3, 4};
        int limit = 5;
        auto localResult = solution.numRescueBoats(people, limit);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
