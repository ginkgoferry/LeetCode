/*
 * Problem: 1702. 修改后的最大二进制字符串 / Maximum Binary String After Change
 * Link: https://leetcode.cn/problems/maximum-binary-string-after-change/
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
    string maximumBinaryString(string binary) {
        // TODO: 在这里实现你的解法。
        (void)binary;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string binary = "000110";
        auto localResult = solution.maximumBinaryString(binary);
        string expected = "111011";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string binary = "01";
        auto localResult = solution.maximumBinaryString(binary);
        string expected = "01";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
