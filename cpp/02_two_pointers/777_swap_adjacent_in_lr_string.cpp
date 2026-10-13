/*
 * Problem: 777. 在 LR 字符串中交换相邻字符 / Swap Adjacent in LR String
 * Link: https://leetcode.cn/problems/swap-adjacent-in-lr-string/
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
    bool canTransform(string start, string result) {
        // TODO: 在这里实现你的解法。
        (void)start;
        (void)result;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string start = "RXXLRXRXL";
        string result = "XRLXXRRLX";
        auto localResult = solution.canTransform(start, result);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string start = "X";
        string result = "L";
        auto localResult = solution.canTransform(start, result);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
