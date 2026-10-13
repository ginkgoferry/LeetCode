/*
 * Problem: 691. 贴纸拼词 / Stickers to Spell Word
 * Link: https://leetcode.cn/problems/stickers-to-spell-word/
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
    int minStickers(vector<string>& stickers, string target) {
        // TODO: 在这里实现你的解法。
        (void)stickers;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> stickers = {"with", "example", "science"};
        string target = "thehat";
        auto localResult = solution.minStickers(stickers, target);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> stickers = {"notice", "possible"};
        string target = "basicbasic";
        auto localResult = solution.minStickers(stickers, target);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
