/*
 * Problem: 524. 通过删除字母匹配到字典里最长单词 / Longest Word in Dictionary through Deleting
 * Link: https://leetcode.cn/problems/longest-word-in-dictionary-through-deleting/
 * Chapter: 双指针
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
    string findLongestWord(string s, vector<string>& dictionary) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)dictionary;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abpcplea";
        vector<string> dictionary = {"ale", "apple", "monkey", "plea"};
        auto localResult = solution.findLongestWord(s, dictionary);
        string expected = "apple";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abpcplea";
        vector<string> dictionary = {"a", "b", "c"};
        auto localResult = solution.findLongestWord(s, dictionary);
        string expected = "a";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
