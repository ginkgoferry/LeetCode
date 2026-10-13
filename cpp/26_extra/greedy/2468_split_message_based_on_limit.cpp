/*
 * Problem: 2468. 根据限制分割消息 / Split Message Based on Limit
 * Link: https://leetcode.cn/problems/split-message-based-on-limit/
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
    vector<string> splitMessage(string message, int limit) {
        // TODO: 在这里实现你的解法。
        (void)message;
        (void)limit;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string message = "this is really a very awesome message";
        int limit = 9;
        auto localResult = solution.splitMessage(message, limit);
        vector<string> expected = {"thi<1/14>", "s i<2/14>", "s r<3/14>", "eal<4/14>", "ly <5/14>", "a v<6/14>", "ery<7/14>", " aw<8/14>", "eso<9/14>", "me<10/14>", " m<11/14>", "es<12/14>", "sa<13/14>", "ge<14/14>"};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string message = "short message";
        int limit = 15;
        auto localResult = solution.splitMessage(message, limit);
        vector<string> expected = {"short mess<1/2>", "age<2/2>"};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
