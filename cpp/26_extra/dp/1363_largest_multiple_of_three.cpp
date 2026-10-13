/*
 * Problem: 1363. 形成三的最大倍数 / Largest Multiple of Three
 * Link: https://leetcode.cn/problems/largest-multiple-of-three/
 * Chapter: 动态规划
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
    string largestMultipleOfThree(vector<int>& digits) {
        // TODO: 在这里实现你的解法。
        (void)digits;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> digits = {8, 1, 9};
        auto localResult = solution.largestMultipleOfThree(digits);
        string expected = "981";
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> digits = {8, 6, 7, 1, 0};
        auto localResult = solution.largestMultipleOfThree(digits);
        string expected = "8760";
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> digits = {1};
        auto localResult = solution.largestMultipleOfThree(digits);
        string expected = "";
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> digits = {0, 0, 0, 0, 0, 0};
        auto localResult = solution.largestMultipleOfThree(digits);
        string expected = "0";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
