/*
 * Problem: 3076. 数组中的最短非公共子字符串 / Shortest Uncommon Substring in an Array
 * Link: https://leetcode.cn/problems/shortest-uncommon-substring-in-an-array/
 * Chapter: 字符串
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
    vector<string> shortestSubstrings(vector<string>& arr) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> arr = {"cab", "ad", "bad", "c"};
        auto localResult = solution.shortestSubstrings(arr);
        vector<string> expected = {"ab", "", "ba", ""};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> arr = {"abc", "bcd", "abcd"};
        auto localResult = solution.shortestSubstrings(arr);
        vector<string> expected = {"", "", "abcd"};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
