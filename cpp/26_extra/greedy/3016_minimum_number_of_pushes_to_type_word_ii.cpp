/*
 * Problem: 3016. 输入单词需要的最少按键次数 II / Minimum Number of Pushes to Type Word II
 * Link: https://leetcode.cn/problems/minimum-number-of-pushes-to-type-word-ii/
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
    int minimumPushes(string word) {
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
        string word = "abcde";
        auto localResult = solution.minimumPushes(word);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "xyzxyzxyzxyz";
        auto localResult = solution.minimumPushes(word);
        int expected = 12;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "aabbccddeeffgghhiiiiii";
        auto localResult = solution.minimumPushes(word);
        int expected = 24;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
