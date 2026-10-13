/*
 * Problem: 3043. 最长公共前缀的长度 / Find the Length of the Longest Common Prefix
 * Link: https://leetcode.cn/problems/find-the-length-of-the-longest-common-prefix/
 * Chapter: 数据结构
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
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        // TODO: 在这里实现你的解法。
        (void)arr1;
        (void)arr2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr1 = {1, 10, 100};
        vector<int> arr2 = {1000};
        auto localResult = solution.longestCommonPrefix(arr1, arr2);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr1 = {1, 2, 3};
        vector<int> arr2 = {4, 4, 4};
        auto localResult = solution.longestCommonPrefix(arr1, arr2);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
