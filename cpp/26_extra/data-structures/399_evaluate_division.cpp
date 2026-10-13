/*
 * Problem: 399. 除法求值 / Evaluate Division
 * Link: https://leetcode.cn/problems/evaluate-division/
 * Chapter: 数据结构
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
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)equations;
        (void)values;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<string>> equations = {{"a", "b"}, {"b", "c"}};
        vector<double> values = {2.0, 3.0};
        vector<vector<string>> queries = {{"a", "c"}, {"b", "a"}, {"a", "e"}, {"a", "a"}, {"x", "x"}};
        auto localResult = solution.calcEquation(equations, values, queries);
        vector<double> expected = {6.0, 0.5, -1.0, 1.0, -1.0};
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        vector<vector<string>> equations = {{"a", "b"}, {"b", "c"}, {"bc", "cd"}};
        vector<double> values = {1.5, 2.5, 5.0};
        vector<vector<string>> queries = {{"a", "c"}, {"c", "b"}, {"bc", "cd"}, {"cd", "bc"}};
        auto localResult = solution.calcEquation(equations, values, queries);
        vector<double> expected = {3.75, 0.4, 5.0, 0.2};
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        vector<vector<string>> equations = {{"a", "b"}};
        vector<double> values = {0.5};
        vector<vector<string>> queries = {{"a", "b"}, {"b", "a"}, {"a", "c"}, {"x", "y"}};
        auto localResult = solution.calcEquation(equations, values, queries);
        vector<double> expected = {0.5, 2.0, -1.0, -1.0};
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
