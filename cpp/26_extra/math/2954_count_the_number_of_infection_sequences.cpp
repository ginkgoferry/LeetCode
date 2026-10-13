/*
 * Problem: 2954. 统计感冒序列的数目 / Count the Number of Infection Sequences
 * Link: https://leetcode.cn/problems/count-the-number-of-infection-sequences/
 * Chapter: 数学
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
    int numberOfSequence(int n, vector<int>& sick) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)sick;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        vector<int> sick = {0, 4};
        auto localResult = solution.numberOfSequence(n, sick);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        vector<int> sick = {1};
        auto localResult = solution.numberOfSequence(n, sick);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
