/*
 * Problem: 2136. 全部开花的最早一天 / Earliest Possible Day of Full Bloom
 * Link: https://leetcode.cn/problems/earliest-possible-day-of-full-bloom/
 * Chapter: 贪心算法
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
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        // TODO: 在这里实现你的解法。
        (void)plantTime;
        (void)growTime;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> plantTime = {1, 4, 3};
        vector<int> growTime = {2, 3, 1};
        auto localResult = solution.earliestFullBloom(plantTime, growTime);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> plantTime = {1, 2, 3, 2};
        vector<int> growTime = {2, 1, 2, 1};
        auto localResult = solution.earliestFullBloom(plantTime, growTime);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> plantTime = {1};
        vector<int> growTime = {1};
        auto localResult = solution.earliestFullBloom(plantTime, growTime);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
