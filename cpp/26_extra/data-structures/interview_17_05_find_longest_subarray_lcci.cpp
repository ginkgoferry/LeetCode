/*
 * Problem: 面试题 17.05. 字母与数字 / Find Longest Subarray LCCI
 * Link: https://leetcode.cn/problems/find-longest-subarray-lcci/
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
    vector<string> findLongestSubarray(vector<string>& array) {
        // TODO: 在这里实现你的解法。
        (void)array;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> array = {"A", "1", "B", "C", "D", "2", "3", "4", "E", "5", "F", "G", "6", "7", "H", "I", "J", "K", "L", "M"};
        auto localResult = solution.findLongestSubarray(array);
        vector<string> expected = {"A", "1", "B", "C", "D", "2", "3", "4", "E", "5", "F", "G", "6", "7"};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> array = {"A", "A"};
        auto localResult = solution.findLongestSubarray(array);
        vector<string> expected = {};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
