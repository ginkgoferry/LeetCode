/*
 * Problem: 3017. 按距离统计房屋对数目 II / Count the Number of Houses at a Certain Distance II
 * Link: https://leetcode.cn/problems/count-the-number-of-houses-at-a-certain-distance-ii/
 * Chapter: 数据结构
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
    vector<long long> countOfPairs(int n, int x, int y) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)x;
        (void)y;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        int x = 1;
        int y = 3;
        auto localResult = solution.countOfPairs(n, x, y);
        vector<long long> expected = {6LL, 0LL, 0LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int x = 2;
        int y = 4;
        auto localResult = solution.countOfPairs(n, x, y);
        vector<long long> expected = {10LL, 8LL, 2LL, 0LL, 0LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        int x = 1;
        int y = 1;
        auto localResult = solution.countOfPairs(n, x, y);
        vector<long long> expected = {6LL, 4LL, 2LL, 0LL};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
