/*
 * Problem: 282. 给表达式添加运算符 / Expression Add Operators
 * Link: https://leetcode.cn/problems/expression-add-operators/
 * Chapter: 树与回溯
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
    vector<string> addOperators(string num, int target) {
        // TODO: 在这里实现你的解法。
        (void)num;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string num = "123";
        int target = 6;
        auto localResult = solution.addOperators(num, target);
        vector<string> expected = {"1+2+3", "1*2*3"};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "232";
        int target = 8;
        auto localResult = solution.addOperators(num, target);
        vector<string> expected = {"2*3+2", "2+3*2"};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "3456237490";
        int target = 9191;
        auto localResult = solution.addOperators(num, target);
        vector<string> expected = {};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
