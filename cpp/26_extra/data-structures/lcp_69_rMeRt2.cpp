/*
 * Problem: LCP 69. Hello LeetCode! / Hello LeetCode!
 * Link: https://leetcode.cn/problems/rMeRt2/
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
    int Leetcode(vector<string>& words) {
        // TODO: 在这里实现你的解法。
        (void)words;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> words = {"hold", "engineer", "cost", "level"};
        auto localResult = solution.Leetcode(words);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"hello", "leetcode"};
        auto localResult = solution.Leetcode(words);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
