/*
 * Problem: 943. 最短超级串 / Find the Shortest Superstring
 * Link: https://leetcode.cn/problems/find-the-shortest-superstring/
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
    string shortestSuperstring(vector<string>& words) {
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
        vector<string> words = {"alex", "loves", "leetcode"};
        const auto localOriginalWords = words;
        auto localResult = solution.shortestSuperstring(words);
        assert(localResult.size() == 17);
        for (const auto& word : localOriginalWords) assert(localResult.find(word) != string::npos);
    }

    {
        // 官方样例
        vector<string> words = {"catg", "ctaagt", "gcta", "ttca", "atgcatc"};
        const auto localOriginalWords = words;
        auto localResult = solution.shortestSuperstring(words);
        assert(localResult.size() == 16);
        for (const auto& word : localOriginalWords) assert(localResult.find(word) != string::npos);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
