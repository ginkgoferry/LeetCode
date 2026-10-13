/*
 * Problem: 1405. 最长快乐字符串 / Longest Happy String
 * Link: https://leetcode.cn/problems/longest-happy-string/
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
    string longestDiverseString(int a, int b, int c) {
        // TODO: 在这里实现你的解法。
        (void)a;
        (void)b;
        (void)c;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int a = 1;
        int b = 1;
        int c = 7;
        auto localResult = solution.longestDiverseString(a, b, c);
        assert(localResult.size() == 8);
        assert(count(localResult.begin(), localResult.end(), 'a') <= a);
        assert(count(localResult.begin(), localResult.end(), 'b') <= b);
        assert(count(localResult.begin(), localResult.end(), 'c') <= c);
        for (char ch : localResult) assert(ch == 'a' || ch == 'b' || ch == 'c');
        for (size_t i = 2; i < localResult.size(); ++i)
            assert(localResult[i] != localResult[i-1] || localResult[i] != localResult[i-2]);
    }

    {
        // 官方样例
        int a = 2;
        int b = 2;
        int c = 1;
        auto localResult = solution.longestDiverseString(a, b, c);
        assert(localResult.size() == 5);
        assert(count(localResult.begin(), localResult.end(), 'a') <= a);
        assert(count(localResult.begin(), localResult.end(), 'b') <= b);
        assert(count(localResult.begin(), localResult.end(), 'c') <= c);
        for (char ch : localResult) assert(ch == 'a' || ch == 'b' || ch == 'c');
        for (size_t i = 2; i < localResult.size(); ++i)
            assert(localResult[i] != localResult[i-1] || localResult[i] != localResult[i-2]);
    }

    {
        // 官方样例
        int a = 7;
        int b = 1;
        int c = 0;
        auto localResult = solution.longestDiverseString(a, b, c);
        assert(localResult.size() == 5);
        assert(count(localResult.begin(), localResult.end(), 'a') <= a);
        assert(count(localResult.begin(), localResult.end(), 'b') <= b);
        assert(count(localResult.begin(), localResult.end(), 'c') <= c);
        for (char ch : localResult) assert(ch == 'a' || ch == 'b' || ch == 'c');
        for (size_t i = 2; i < localResult.size(); ++i)
            assert(localResult[i] != localResult[i-1] || localResult[i] != localResult[i-2]);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
