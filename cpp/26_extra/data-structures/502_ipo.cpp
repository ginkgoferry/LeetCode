/*
 * Problem: 502. IPO / IPO
 * Link: https://leetcode.cn/problems/ipo/
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
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        // TODO: 在这里实现你的解法。
        (void)k;
        (void)w;
        (void)profits;
        (void)capital;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int k = 2;
        int w = 0;
        vector<int> profits = {1, 2, 3};
        vector<int> capital = {0, 1, 1};
        auto localResult = solution.findMaximizedCapital(k, w, profits, capital);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 3;
        int w = 0;
        vector<int> profits = {1, 2, 3};
        vector<int> capital = {0, 1, 2};
        auto localResult = solution.findMaximizedCapital(k, w, profits, capital);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
