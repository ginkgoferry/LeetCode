/*
 * Problem: 1946. 子字符串突变后可能得到的最大整数 / Largest Number After Mutating Substring
 * Link: https://leetcode.cn/problems/largest-number-after-mutating-substring/
 * Chapter: 贪心算法
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
    string maximumNumber(string num, vector<int>& change) {
        // TODO: 在这里实现你的解法。
        (void)num;
        (void)change;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string num = "132";
        vector<int> change = {9, 8, 5, 0, 3, 6, 4, 2, 6, 8};
        auto localResult = solution.maximumNumber(num, change);
        string expected = "832";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "021";
        vector<int> change = {9, 4, 3, 5, 7, 2, 1, 9, 0, 6};
        auto localResult = solution.maximumNumber(num, change);
        string expected = "934";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "5";
        vector<int> change = {1, 4, 7, 5, 3, 2, 5, 6, 9, 4};
        auto localResult = solution.maximumNumber(num, change);
        string expected = "5";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
