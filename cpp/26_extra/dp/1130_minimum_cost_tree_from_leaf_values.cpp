/*
 * Problem: 1130. 叶值的最小代价生成树 / Minimum Cost Tree From Leaf Values
 * Link: https://leetcode.cn/problems/minimum-cost-tree-from-leaf-values/
 * Chapter: 栈
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
    int mctFromLeafValues(vector<int>& arr) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {6, 2, 4};
        auto localResult = solution.mctFromLeafValues(arr);
        int expected = 32;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {4, 11};
        auto localResult = solution.mctFromLeafValues(arr);
        int expected = 44;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
