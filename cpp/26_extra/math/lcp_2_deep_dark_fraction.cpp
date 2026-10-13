/*
 * Problem: LCP 2. 分式化简 / Deep Dark Fraction
 * Link: https://leetcode.cn/problems/deep-dark-fraction/
 * Chapter: 数学
 * Difficulty: Easy
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
    vector<int> fraction(vector<int>& cont) {
        // TODO: 在这里实现你的解法。
        (void)cont;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> cont = {3, 2, 0, 2};
        auto localResult = solution.fraction(cont);
        vector<int> expected = {13, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cont = {0, 0, 3};
        auto localResult = solution.fraction(cont);
        vector<int> expected = {3, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
