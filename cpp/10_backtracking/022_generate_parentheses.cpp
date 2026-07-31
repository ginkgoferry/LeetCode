/*
 * Problem: 22. 括号生成 / Generate Parentheses
 * Link: https://leetcode.cn/problems/generate-parentheses/
 * Chapter: 回溯
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
    vector<string> generateParenthesis(int n) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        int n = 3;
        auto result = solution.generateParenthesis(n);
        auto expected = vector<string>{"((()))", "(()())", "(())()", "()(())", "()()()"};
        sort(result.begin(), result.end());
        sort(expected.begin(), expected.end());
        assert((result == expected));
    }

    {
        int n = 1;
        auto result = solution.generateParenthesis(n);
        auto expected = vector<string>{"()"};
        sort(result.begin(), result.end());
        sort(expected.begin(), expected.end());
        assert((result == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
