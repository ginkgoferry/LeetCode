/*
 * Problem: 1504. 统计全 1 子矩形 / Count Submatrices With All Ones
 * Link: https://leetcode.cn/problems/count-submatrices-with-all-ones/
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
    int numSubmat(vector<vector<int>>& mat) {
        // TODO: 在这里实现你的解法。
        (void)mat;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> mat = {{1, 0, 1}, {1, 1, 0}, {1, 1, 0}};
        auto localResult = solution.numSubmat(mat);
        int expected = 13;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> mat = {{0, 1, 1, 0}, {0, 1, 1, 1}, {1, 1, 1, 0}};
        auto localResult = solution.numSubmat(mat);
        int expected = 24;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
