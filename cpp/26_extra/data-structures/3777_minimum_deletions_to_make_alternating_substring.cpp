/*
 * Problem: 3777. 使子字符串变交替的最少删除次数 / Minimum Deletions to Make Alternating Substring
 * Link: https://leetcode.cn/problems/minimum-deletions-to-make-alternating-substring/
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
    vector<int> minDeletions(string s, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "ABA";
        vector<vector<int>> queries = {{2, 1, 2}, {1, 1}, {2, 0, 2}};
        auto localResult = solution.minDeletions(s, queries);
        vector<int> expected = {0, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "ABB";
        vector<vector<int>> queries = {{2, 0, 2}, {1, 2}, {2, 0, 2}};
        auto localResult = solution.minDeletions(s, queries);
        vector<int> expected = {1, 0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "BABA";
        vector<vector<int>> queries = {{2, 0, 3}, {1, 1}, {2, 1, 3}};
        auto localResult = solution.minDeletions(s, queries);
        vector<int> expected = {0, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
