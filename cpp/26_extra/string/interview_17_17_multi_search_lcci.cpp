/*
 * Problem: 面试题 17.17. 多次搜索 / Multi Search LCCI
 * Link: https://leetcode.cn/problems/multi-search-lcci/
 * Chapter: 字符串
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
    vector<vector<int>> multiSearch(string big, vector<string>& smalls) {
        // TODO: 在这里实现你的解法。
        (void)big;
        (void)smalls;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string big = "mississippi";
        vector<string> smalls = {"is", "ppi", "hi", "sis", "i", "ssippi"};
        auto localResult = solution.multiSearch(big, smalls);
        vector<vector<int>> expected = {{1, 4}, {8}, {}, {3}, {1, 4, 7, 10}, {5}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
