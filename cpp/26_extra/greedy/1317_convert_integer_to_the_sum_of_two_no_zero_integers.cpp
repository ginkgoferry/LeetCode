/*
 * Problem: 1317. 将整数转换为两个无零整数的和 / Convert Integer to the Sum of Two No-Zero Integers
 * Link: https://leetcode.cn/problems/convert-integer-to-the-sum-of-two-no-zero-integers/
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
    vector<int> getNoZeroIntegers(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        auto localResult = solution.getNoZeroIntegers(n);
        assert(localResult.size() == 2);
        assert(localResult[0] > 0 && localResult[1] > 0 && localResult[0] + localResult[1] == n);
        for (int value : localResult) assert(to_string(value).find('0') == string::npos);
    }

    {
        // 官方样例
        int n = 11;
        auto localResult = solution.getNoZeroIntegers(n);
        assert(localResult.size() == 2);
        assert(localResult[0] > 0 && localResult[1] > 0 && localResult[0] + localResult[1] == n);
        for (int value : localResult) assert(to_string(value).find('0') == string::npos);
    }

    {
        // 官方样例
        int n = 10000;
        auto localResult = solution.getNoZeroIntegers(n);
        assert(localResult.size() == 2);
        assert(localResult[0] > 0 && localResult[1] > 0 && localResult[0] + localResult[1] == n);
        for (int value : localResult) assert(to_string(value).find('0') == string::npos);
    }

    {
        // 官方样例
        int n = 69;
        auto localResult = solution.getNoZeroIntegers(n);
        assert(localResult.size() == 2);
        assert(localResult[0] > 0 && localResult[1] > 0 && localResult[0] + localResult[1] == n);
        for (int value : localResult) assert(to_string(value).find('0') == string::npos);
    }

    {
        // 官方样例
        int n = 1010;
        auto localResult = solution.getNoZeroIntegers(n);
        assert(localResult.size() == 2);
        assert(localResult[0] > 0 && localResult[1] > 0 && localResult[0] + localResult[1] == n);
        for (int value : localResult) assert(to_string(value).find('0') == string::npos);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
