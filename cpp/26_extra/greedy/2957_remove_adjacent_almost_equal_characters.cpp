/*
 * Problem: 2957. 消除相邻近似相等字符 / Remove Adjacent Almost-Equal Characters
 * Link: https://leetcode.cn/problems/remove-adjacent-almost-equal-characters/
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
    int removeAlmostEqualCharacters(string word) {
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
        string word = "aaaaa";
        auto localResult = solution.removeAlmostEqualCharacters(word);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "abddez";
        auto localResult = solution.removeAlmostEqualCharacters(word);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "zyxyxyz";
        auto localResult = solution.removeAlmostEqualCharacters(word);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
