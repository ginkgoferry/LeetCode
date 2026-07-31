/*
 * Problem: 139. 单词拆分 / Word Break
 * Link: https://leetcode.cn/problems/word-break/
 * Chapter: 动态规划
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
    bool wordBreak(string s, vector<string>& wordDict) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        string s = "leetcode";
        vector<string> wordDict = {"leet", "code"};
        assert((solution.wordBreak(s, wordDict) == true));
    }

    {
        string s = "applepenapple";
        vector<string> wordDict = {"apple", "pen"};
        assert((solution.wordBreak(s, wordDict) == true));
    }

    {
        string s = "catsandog";
        vector<string> wordDict = {"cats", "dog", "sand", "and", "cat"};
        assert((solution.wordBreak(s, wordDict) == false));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
