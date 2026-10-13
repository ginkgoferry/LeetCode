/*
 * Problem: 1096. 花括号展开 II / Brace Expansion II
 * Link: https://leetcode.cn/problems/brace-expansion-ii/
 * Chapter: 数据结构
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
    vector<string> braceExpansionII(string expression) {
        // TODO: 在这里实现你的解法。
        (void)expression;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string expression = "{a,b}{c,{d,e}}";
        auto localResult = solution.braceExpansionII(expression);
        vector<string> expected = {"ac", "ad", "ae", "bc", "bd", "be"};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string expression = "{{a,z},a{b,c},{ab,z}}";
        auto localResult = solution.braceExpansionII(expression);
        vector<string> expected = {"a", "ab", "ac", "z"};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
