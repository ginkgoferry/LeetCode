/*
 * Problem: 1409. 查询带键的排列 / Queries on a Permutation With Key
 * Link: https://leetcode.cn/problems/queries-on-a-permutation-with-key/
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
    vector<int> processQueries(vector<int>& queries, int m) {
        // TODO: 在这里实现你的解法。
        (void)queries;
        (void)m;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> queries = {3, 1, 2, 1};
        int m = 5;
        auto localResult = solution.processQueries(queries, m);
        vector<int> expected = {2, 1, 2, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> queries = {4, 1, 2, 2};
        int m = 4;
        auto localResult = solution.processQueries(queries, m);
        vector<int> expected = {3, 1, 2, 0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> queries = {7, 5, 5, 8, 3};
        int m = 8;
        auto localResult = solution.processQueries(queries, m);
        vector<int> expected = {6, 5, 0, 7, 5};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
