/*
 * Problem: 1237. 找出给定方程的正整数解 / Find Positive Integer Solution for a Given Equation
 * Link: https://leetcode.cn/problems/find-positive-integer-solution-for-a-given-equation/
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

// LOCAL implementations match the public platform metadata's function IDs.
class CustomFunction {
    int identifier;
public:
    explicit CustomFunction(int id) : identifier(id) { assert(id >= 1 && id <= 9); }
    int f(int x, int y) {
        assert(x >= 1 && x <= 1000 && y >= 1 && y <= 1000);
        switch (identifier) {
            case 1: return x + y;
            case 2: return x * y;
            case 3: return x * x + y;
            case 4: return x + y * y;
            case 5: return x * x + y * y;
            case 6: return (x + y) * (x + y);
            case 7: return x * x * x + y * y * y;
            case 8: return x * x * y;
            case 9: return x * y * y;
        }
        assert(false); return 0;
    }
};

#endif

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        // TODO: 在这里实现你的解法。
        (void)customfunction;
        (void)z;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        CustomFunction customfunction(1);
        int z = 5;
        auto localResult = solution.findSolution(customfunction, z);
        vector<vector<int>> expected = {{1, 4}, {2, 3}, {3, 2}, {4, 1}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        CustomFunction customfunction(2);
        int z = 5;
        auto localResult = solution.findSolution(customfunction, z);
        vector<vector<int>> expected = {{1, 5}, {5, 1}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
