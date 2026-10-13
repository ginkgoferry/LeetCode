/*
 * Problem: 2657. 找到两个数组的前缀公共数组 / Find the Prefix Common Array of Two Arrays
 * Link: https://leetcode.cn/problems/find-the-prefix-common-array-of-two-arrays/
 * Chapter: 位运算
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
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        // TODO: 在这里实现你的解法。
        (void)A;
        (void)B;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> A = {1, 3, 2, 4};
        vector<int> B = {3, 1, 2, 4};
        auto localResult = solution.findThePrefixCommonArray(A, B);
        vector<int> expected = {0, 2, 3, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> A = {2, 3, 1};
        vector<int> B = {3, 1, 2};
        auto localResult = solution.findThePrefixCommonArray(A, B);
        vector<int> expected = {0, 1, 3};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
