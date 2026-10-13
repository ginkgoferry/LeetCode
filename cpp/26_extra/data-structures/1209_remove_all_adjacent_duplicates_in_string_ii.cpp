/*
 * Problem: 1209. 删除字符串中的所有相邻重复项 II / Remove All Adjacent Duplicates in String II
 * Link: https://leetcode.cn/problems/remove-all-adjacent-duplicates-in-string-ii/
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
    string removeDuplicates(string s, int k) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abcd";
        int k = 2;
        auto localResult = solution.removeDuplicates(s, k);
        string expected = "abcd";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "deeedbbcccbdaa";
        int k = 3;
        auto localResult = solution.removeDuplicates(s, k);
        string expected = "aa";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "pbbcggttciiippooaais";
        int k = 2;
        auto localResult = solution.removeDuplicates(s, k);
        string expected = "ps";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
