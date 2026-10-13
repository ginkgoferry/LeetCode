/*
 * Problem: 2086. 喂食仓鼠的最小食物桶数 / Minimum Number of Food Buckets to Feed the Hamsters
 * Link: https://leetcode.cn/problems/minimum-number-of-food-buckets-to-feed-the-hamsters/
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
    int minimumBuckets(string hamsters) {
        // TODO: 在这里实现你的解法。
        (void)hamsters;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string hamsters = "H..H";
        auto localResult = solution.minimumBuckets(hamsters);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string hamsters = ".H.H.";
        auto localResult = solution.minimumBuckets(hamsters);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string hamsters = ".HHH.";
        auto localResult = solution.minimumBuckets(hamsters);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
