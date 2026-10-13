/*
 * Problem: 3458. 选择 K 个互不重叠的特殊子字符串 / Select K Disjoint Special Substrings
 * Link: https://leetcode.cn/problems/select-k-disjoint-special-substrings/
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
    bool maxSubstringLength(string s, int k) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abcdbaefab";
        int k = 2;
        auto localResult = solution.maxSubstringLength(s, k);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "cdefdc";
        int k = 3;
        auto localResult = solution.maxSubstringLength(s, k);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abeabe";
        int k = 0;
        auto localResult = solution.maxSubstringLength(s, k);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
