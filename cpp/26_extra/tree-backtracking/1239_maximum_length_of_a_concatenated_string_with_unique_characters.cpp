/*
 * Problem: 1239. 串联字符串的最大长度 / Maximum Length of a Concatenated String with Unique Characters
 * Link: https://leetcode.cn/problems/maximum-length-of-a-concatenated-string-with-unique-characters/
 * Chapter: 树与回溯
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
    int maxLength(vector<string>& arr) {
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
        vector<string> arr = {"un", "iq", "ue"};
        auto localResult = solution.maxLength(arr);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> arr = {"cha", "r", "act", "ers"};
        auto localResult = solution.maxLength(arr);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> arr = {"abcdefghijklmnopqrstuvwxyz"};
        auto localResult = solution.maxLength(arr);
        int expected = 26;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
