/*
 * Problem: 2337. 移动片段得到字符串 / Move Pieces to Obtain a String
 * Link: https://leetcode.cn/problems/move-pieces-to-obtain-a-string/
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
    bool canChange(string start, string target) {
        // TODO: 在这里实现你的解法。
        (void)start;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string start = "_L__R__R_";
        string target = "L______RR";
        auto localResult = solution.canChange(start, target);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string start = "R_L_";
        string target = "__LR";
        auto localResult = solution.canChange(start, target);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string start = "_R";
        string target = "R_";
        auto localResult = solution.canChange(start, target);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
