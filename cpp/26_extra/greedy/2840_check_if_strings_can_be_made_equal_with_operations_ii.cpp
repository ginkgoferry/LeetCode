/*
 * Problem: 2840. 判断通过操作能否让字符串相等 II / Check if Strings Can be Made Equal With Operations II
 * Link: https://leetcode.cn/problems/check-if-strings-can-be-made-equal-with-operations-ii/
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
    bool checkStrings(string s1, string s2) {
        // TODO: 在这里实现你的解法。
        (void)s1;
        (void)s2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s1 = "abcdba";
        string s2 = "cabdab";
        auto localResult = solution.checkStrings(s1, s2);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s1 = "abe";
        string s2 = "bea";
        auto localResult = solution.checkStrings(s1, s2);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
