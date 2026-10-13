/*
 * Problem: 3216. 交换后字典序最小的字符串 / Lexicographically Smallest String After a Swap
 * Link: https://leetcode.cn/problems/lexicographically-smallest-string-after-a-swap/
 * Chapter: 贪心算法
 * Difficulty: Easy
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
    string getSmallestString(string s) {
        // TODO: 在这里实现你的解法。
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "45320";
        auto localResult = solution.getSmallestString(s);
        string expected = "43520";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "001";
        auto localResult = solution.getSmallestString(s);
        string expected = "001";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
