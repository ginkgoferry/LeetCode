/*
 * Problem: 2273. 移除字母异位词后的结果数组 / Find Resultant Array After Removing Anagrams
 * Link: https://leetcode.cn/problems/find-resultant-array-after-removing-anagrams/
 * Chapter: 双指针
 * Difficulty: Easy
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
    vector<string> removeAnagrams(vector<string>& words) {
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
        vector<string> words = {"abba", "baba", "bbaa", "cd", "cd"};
        auto localResult = solution.removeAnagrams(words);
        vector<string> expected = {"abba", "cd"};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"a", "b", "c", "d", "e"};
        auto localResult = solution.removeAnagrams(words);
        vector<string> expected = {"a", "b", "c", "d", "e"};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
