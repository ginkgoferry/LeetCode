/*
 * Problem: 20. 有效的括号 / Valid Parentheses
 * Link: https://leetcode.cn/problems/valid-parentheses/
 * Chapter: 栈
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
    bool isValid(string s) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        string s = "()";
        assert((solution.isValid(s) == true));
    }

    {
        string s = "()[]{}";
        assert((solution.isValid(s) == true));
    }

    {
        string s = "(]";
        assert((solution.isValid(s) == false));
    }

    {
        string s = "([])";
        assert((solution.isValid(s) == true));
    }

    {
        string s = "([)]";
        assert((solution.isValid(s) == false));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
