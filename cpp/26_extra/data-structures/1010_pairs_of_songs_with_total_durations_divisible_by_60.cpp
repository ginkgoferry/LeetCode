/*
 * Problem: 1010. 总持续时间可被 60 整除的歌曲 / Pairs of Songs With Total Durations Divisible by 60
 * Link: https://leetcode.cn/problems/pairs-of-songs-with-total-durations-divisible-by-60/
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
    int numPairsDivisibleBy60(vector<int>& time) {
        // TODO: 在这里实现你的解法。
        (void)time;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> time = {30, 20, 150, 100, 40};
        auto localResult = solution.numPairsDivisibleBy60(time);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> time = {60, 60, 60};
        auto localResult = solution.numPairsDivisibleBy60(time);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
