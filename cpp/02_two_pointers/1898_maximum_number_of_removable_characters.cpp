/*
 * Problem: 1898. 可移除字符的最大数目 / Maximum Number of Removable Characters
 * Link: https://leetcode.cn/problems/maximum-number-of-removable-characters/
 * Chapter: 双指针
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
    int maximumRemovals(string s, string p, vector<int>& removable) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)p;
        (void)removable;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abcacb";
        string p = "ab";
        vector<int> removable = {3, 1, 0};
        auto localResult = solution.maximumRemovals(s, p, removable);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcbddddd";
        string p = "abcd";
        vector<int> removable = {3, 2, 1, 4, 5, 6};
        auto localResult = solution.maximumRemovals(s, p, removable);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcab";
        string p = "abc";
        vector<int> removable = {0, 1, 2, 3, 4};
        auto localResult = solution.maximumRemovals(s, p, removable);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
