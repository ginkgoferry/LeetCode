/*
 * Problem: 936. 戳印序列 / Stamping The Sequence
 * Link: https://leetcode.cn/problems/stamping-the-sequence/
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
    vector<int> movesToStamp(string stamp, string target) {
        // TODO: 在这里实现你的解法。
        (void)stamp;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string stamp = "abc";
        string target = "ababc";
        auto localResult = solution.movesToStamp(stamp, target);
        vector<int> expected = {0, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string stamp = "abca";
        string target = "aabcaca";
        auto localResult = solution.movesToStamp(stamp, target);
        vector<int> expected = {3, 0, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
