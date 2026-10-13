/*
 * Problem: 2645. 构造有效字符串的最少插入数 / Minimum Additions to Make Valid String
 * Link: https://leetcode.cn/problems/minimum-additions-to-make-valid-string/
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
    int addMinimum(string word) {
        // TODO: 在这里实现你的解法。
        (void)word;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word = "b";
        auto localResult = solution.addMinimum(word);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "aaa";
        auto localResult = solution.addMinimum(word);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "abc";
        auto localResult = solution.addMinimum(word);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
