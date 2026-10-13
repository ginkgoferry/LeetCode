/*
 * Problem: 1170. 比较字符串最小字母出现频次 / Compare Strings by Frequency of the Smallest Character
 * Link: https://leetcode.cn/problems/compare-strings-by-frequency-of-the-smallest-character/
 * Chapter: 二分查找
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
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        // TODO: 在这里实现你的解法。
        (void)queries;
        (void)words;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> queries = {"cbd"};
        vector<string> words = {"zaaaz"};
        auto localResult = solution.numSmallerByFrequency(queries, words);
        vector<int> expected = {1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> queries = {"bbb", "cc"};
        vector<string> words = {"a", "aa", "aaa", "aaaa"};
        auto localResult = solution.numSmallerByFrequency(queries, words);
        vector<int> expected = {1, 2};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
