/*
 * Problem: 925. 长按键入 / Long Pressed Name
 * Link: https://leetcode.cn/problems/long-pressed-name/
 * Chapter: 双指针
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
    bool isLongPressedName(string name, string typed) {
        // TODO: 在这里实现你的解法。
        (void)name;
        (void)typed;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string name = "alex";
        string typed = "aaleex";
        auto localResult = solution.isLongPressedName(name, typed);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string name = "saeed";
        string typed = "ssaaedd";
        auto localResult = solution.isLongPressedName(name, typed);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
