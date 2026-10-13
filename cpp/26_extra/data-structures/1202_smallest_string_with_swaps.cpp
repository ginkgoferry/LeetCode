/*
 * Problem: 1202. 交换字符串中的元素 / Smallest String With Swaps
 * Link: https://leetcode.cn/problems/smallest-string-with-swaps/
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
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)pairs;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "dcab";
        vector<vector<int>> pairs = {{0, 3}, {1, 2}};
        auto localResult = solution.smallestStringWithSwaps(s, pairs);
        string expected = "bacd";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "dcab";
        vector<vector<int>> pairs = {{0, 3}, {1, 2}, {0, 2}};
        auto localResult = solution.smallestStringWithSwaps(s, pairs);
        string expected = "abcd";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "cba";
        vector<vector<int>> pairs = {{0, 1}, {1, 2}};
        auto localResult = solution.smallestStringWithSwaps(s, pairs);
        string expected = "abc";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
