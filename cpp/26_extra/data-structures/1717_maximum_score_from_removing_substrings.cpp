/*
 * Problem: 1717. 删除子字符串的最大得分 / Maximum Score From Removing Substrings
 * Link: https://leetcode.cn/problems/maximum-score-from-removing-substrings/
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
    int maximumGain(string s, int x, int y) {
        // TODO: 在这里实现你的解法。
        (void)s;
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
        string s = "cdbcbbaaabab";
        int x = 4;
        int y = 5;
        auto localResult = solution.maximumGain(s, x, y);
        int expected = 19;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aabbaaxybbaabb";
        int x = 5;
        int y = 4;
        auto localResult = solution.maximumGain(s, x, y);
        int expected = 20;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
