/*
 * Problem: 1668. 最大重复子字符串 / Maximum Repeating Substring
 * Link: https://leetcode.cn/problems/maximum-repeating-substring/
 * Chapter: 字符串
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
    int maxRepeating(string sequence, string word) {
        // TODO: 在这里实现你的解法。
        (void)sequence;
        (void)word;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string sequence = "ababc";
        string word = "ab";
        auto localResult = solution.maxRepeating(sequence, word);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string sequence = "ababc";
        string word = "ba";
        auto localResult = solution.maxRepeating(sequence, word);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string sequence = "ababc";
        string word = "ac";
        auto localResult = solution.maxRepeating(sequence, word);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
