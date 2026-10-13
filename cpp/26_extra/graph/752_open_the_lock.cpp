/*
 * Problem: 752. 打开转盘锁 / Open the Lock
 * Link: https://leetcode.cn/problems/open-the-lock/
 * Chapter: 图论
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
    int openLock(vector<string>& deadends, string target) {
        // TODO: 在这里实现你的解法。
        (void)deadends;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> deadends = {"0201", "0101", "0102", "1212", "2002"};
        string target = "0202";
        auto localResult = solution.openLock(deadends, target);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> deadends = {"8888"};
        string target = "0009";
        auto localResult = solution.openLock(deadends, target);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> deadends = {"8887", "8889", "8878", "8898", "8788", "8988", "7888", "9888"};
        string target = "8888";
        auto localResult = solution.openLock(deadends, target);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
