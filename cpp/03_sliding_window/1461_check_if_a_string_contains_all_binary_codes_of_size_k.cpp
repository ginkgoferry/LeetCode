/*
 * Problem: 1461. 检查一个字符串是否包含所有长度为 K 的二进制子串 / Check If a String Contains All Binary Codes of Size K
 * Link: https://leetcode.cn/problems/check-if-a-string-contains-all-binary-codes-of-size-k/
 * Chapter: 滑动窗口
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
    bool hasAllCodes(string s, int k) {
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
        string s = "00110110";
        int k = 2;
        auto localResult = solution.hasAllCodes(s, k);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "0110";
        int k = 1;
        auto localResult = solution.hasAllCodes(s, k);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "0110";
        int k = 2;
        auto localResult = solution.hasAllCodes(s, k);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
