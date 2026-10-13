/*
 * Problem: 3926. 有效单词计数 / Count Valid Word Occurrences
 * Link: https://leetcode.cn/problems/count-valid-word-occurrences/
 * Chapter: 分组循环
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
    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
        // TODO: 在这里实现你的解法。
        (void)chunks;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> chunks = {"hello wor", "ld hello"};
        vector<string> queries = {"hello", "world", "wor"};
        auto localResult = solution.countWordOccurrences(chunks, queries);
        vector<int> expected = {2, 1, 0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> chunks = {"a--b a-", "-c"};
        vector<string> queries = {"a", "b", "c"};
        auto localResult = solution.countWordOccurrences(chunks, queries);
        vector<int> expected = {2, 1, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> chunks = {"hello"};
        vector<string> queries = {"hello", "ell"};
        auto localResult = solution.countWordOccurrences(chunks, queries);
        vector<int> expected = {1, 0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
