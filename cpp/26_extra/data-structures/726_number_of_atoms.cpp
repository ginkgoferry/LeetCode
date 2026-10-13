/*
 * Problem: 726. 原子的数量 / Number of Atoms
 * Link: https://leetcode.cn/problems/number-of-atoms/
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
    string countOfAtoms(string formula) {
        // TODO: 在这里实现你的解法。
        (void)formula;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string formula = "H2O";
        auto localResult = solution.countOfAtoms(formula);
        string expected = "H2O";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string formula = "Mg(OH)2";
        auto localResult = solution.countOfAtoms(formula);
        string expected = "H2MgO2";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string formula = "K4(ON(SO3)2)2";
        auto localResult = solution.countOfAtoms(formula);
        string expected = "K4N2O14S4";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
