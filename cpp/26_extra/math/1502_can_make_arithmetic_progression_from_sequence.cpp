/*
 * Problem: 1502. 判断能否形成等差数列 / Can Make Arithmetic Progression From Sequence
 * Link: https://leetcode.cn/problems/can-make-arithmetic-progression-from-sequence/
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
    bool canMakeArithmeticProgression(vector<int>& arr) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {3, 5, 1};
        auto localResult = solution.canMakeArithmeticProgression(arr);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 2, 4};
        auto localResult = solution.canMakeArithmeticProgression(arr);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
