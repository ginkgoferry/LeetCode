/*
 * Problem: 2217. 找到指定长度的回文数 / Find Palindrome With Fixed Length
 * Link: https://leetcode.cn/problems/find-palindrome-with-fixed-length/
 * Chapter: 数学
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
    vector<long long> kthPalindrome(vector<int>& queries, int intLength) {
        // TODO: 在这里实现你的解法。
        (void)queries;
        (void)intLength;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> queries = {1, 2, 3, 4, 5, 90};
        int intLength = 3;
        auto localResult = solution.kthPalindrome(queries, intLength);
        vector<long long> expected = {101LL, 111LL, 121LL, 131LL, 141LL, 999LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> queries = {2, 4, 6};
        int intLength = 4;
        auto localResult = solution.kthPalindrome(queries, intLength);
        vector<long long> expected = {1111LL, 1331LL, 1551LL};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
