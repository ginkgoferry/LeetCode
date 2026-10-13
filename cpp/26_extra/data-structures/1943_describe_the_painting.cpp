/*
 * Problem: 1943. 描述绘画结果 / Describe the Painting
 * Link: https://leetcode.cn/problems/describe-the-painting/
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
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        // TODO: 在这里实现你的解法。
        (void)segments;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> segments = {{1, 4, 5}, {4, 7, 7}, {1, 7, 9}};
        auto localResult = solution.splitPainting(segments);
        vector<vector<long long>> expected = {{1LL, 4LL, 14LL}, {4LL, 7LL, 16LL}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> segments = {{1, 7, 9}, {6, 8, 15}, {8, 10, 7}};
        auto localResult = solution.splitPainting(segments);
        vector<vector<long long>> expected = {{1LL, 6LL, 9LL}, {6LL, 7LL, 24LL}, {7LL, 8LL, 15LL}, {8LL, 10LL, 7LL}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> segments = {{1, 4, 5}, {1, 4, 7}, {4, 7, 1}, {4, 7, 11}};
        auto localResult = solution.splitPainting(segments);
        vector<vector<long long>> expected = {{1LL, 4LL, 12LL}, {4LL, 7LL, 12LL}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
