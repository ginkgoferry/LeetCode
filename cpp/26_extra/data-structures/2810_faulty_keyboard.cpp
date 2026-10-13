/*
 * Problem: 2810. 故障键盘 / Faulty Keyboard
 * Link: https://leetcode.cn/problems/faulty-keyboard/
 * Chapter: 数据结构
 * Difficulty: Easy
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
    string finalString(string s) {
        // TODO: 在这里实现你的解法。
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "string";
        auto localResult = solution.finalString(s);
        string expected = "rtsng";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "poiinter";
        auto localResult = solution.finalString(s);
        string expected = "ponter";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
