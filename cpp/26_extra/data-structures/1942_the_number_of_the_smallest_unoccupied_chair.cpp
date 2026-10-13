/*
 * Problem: 1942. 最小未被占据椅子的编号 / The Number of the Smallest Unoccupied Chair
 * Link: https://leetcode.cn/problems/the-number-of-the-smallest-unoccupied-chair/
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
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        // TODO: 在这里实现你的解法。
        (void)times;
        (void)targetFriend;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> times = {{1, 4}, {2, 3}, {4, 6}};
        int targetFriend = 1;
        auto localResult = solution.smallestChair(times, targetFriend);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> times = {{3, 10}, {1, 5}, {2, 6}};
        int targetFriend = 0;
        auto localResult = solution.smallestChair(times, targetFriend);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
