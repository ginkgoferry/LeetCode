/*
 * Problem: 466. 统计重复个数 / Count The Repetitions
 * Link: https://leetcode.cn/problems/count-the-repetitions/
 * Chapter: 图论
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
    int getMaxRepetitions(string s1, int n1, string s2, int n2) {
        // TODO: 在这里实现你的解法。
        (void)s1;
        (void)n1;
        (void)s2;
        (void)n2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s1 = "acb";
        int n1 = 4;
        string s2 = "ab";
        int n2 = 2;
        auto localResult = solution.getMaxRepetitions(s1, n1, s2, n2);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s1 = "acb";
        int n1 = 1;
        string s2 = "acb";
        int n2 = 1;
        auto localResult = solution.getMaxRepetitions(s1, n1, s2, n2);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
