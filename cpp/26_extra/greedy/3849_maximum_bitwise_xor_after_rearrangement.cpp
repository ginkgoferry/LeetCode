/*
 * Problem: 3849. 重新排列后的最大按位异或值 / Maximum Bitwise XOR After Rearrangement
 * Link: https://leetcode.cn/problems/maximum-bitwise-xor-after-rearrangement/
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
    string maximumXor(string s, string t) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)t;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "101";
        string t = "011";
        auto localResult = solution.maximumXor(s, t);
        string expected = "110";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "0110";
        string t = "1110";
        auto localResult = solution.maximumXor(s, t);
        string expected = "1101";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "0101";
        string t = "1001";
        auto localResult = solution.maximumXor(s, t);
        string expected = "1111";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
