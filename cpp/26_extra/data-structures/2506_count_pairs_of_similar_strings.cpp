/*
 * Problem: 2506. 统计相似字符串对的数目 / Count Pairs Of Similar Strings
 * Link: https://leetcode.cn/problems/count-pairs-of-similar-strings/
 * Chapter: 数据结构
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
    int similarPairs(vector<string>& words) {
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
        vector<string> words = {"aba", "aabb", "abcd", "bac", "aabc"};
        auto localResult = solution.similarPairs(words);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"aabb", "ab", "ba"};
        auto localResult = solution.similarPairs(words);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"nba", "cba", "dba"};
        auto localResult = solution.similarPairs(words);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
