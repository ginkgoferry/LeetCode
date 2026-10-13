/*
 * Problem: 1552. 两球之间的磁力 / Magnetic Force Between Two Balls
 * Link: https://leetcode.cn/problems/magnetic-force-between-two-balls/
 * Chapter: 二分查找
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
    int maxDistance(vector<int>& position, int m) {
        // TODO: 在这里实现你的解法。
        (void)position;
        (void)m;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> position = {1, 2, 3, 4, 7};
        int m = 3;
        auto localResult = solution.maxDistance(position, m);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> position = {5, 4, 3, 2, 1, 1000000000};
        int m = 2;
        auto localResult = solution.maxDistance(position, m);
        int expected = 999999999;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
