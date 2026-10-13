/*
 * Problem: 1531. 压缩字符串 II / String Compression II
 * Link: https://leetcode.cn/problems/string-compression-ii/
 * Chapter: 动态规划
 * Difficulty: Hard
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
    int getLengthOfOptimalCompression(string s, int k) {
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
        string s = "aaabcccd";
        int k = 2;
        auto localResult = solution.getLengthOfOptimalCompression(s, k);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aabbaa";
        int k = 2;
        auto localResult = solution.getLengthOfOptimalCompression(s, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aaaaaaaaaaa";
        int k = 0;
        auto localResult = solution.getLengthOfOptimalCompression(s, k);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
