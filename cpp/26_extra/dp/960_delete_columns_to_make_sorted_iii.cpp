/*
 * Problem: 960. 删列造序 III / Delete Columns to Make Sorted III
 * Link: https://leetcode.cn/problems/delete-columns-to-make-sorted-iii/
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
    int minDeletionSize(vector<string>& strs) {
        // TODO: 在这里实现你的解法。
        (void)strs;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> strs = {"babca", "bbazb"};
        auto localResult = solution.minDeletionSize(strs);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> strs = {"edcba"};
        auto localResult = solution.minDeletionSize(strs);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> strs = {"ghi", "def", "abc"};
        auto localResult = solution.minDeletionSize(strs);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
