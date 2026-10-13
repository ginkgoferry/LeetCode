/*
 * Problem: 2433. 找出前缀异或的原始数组 / Find The Original Array of Prefix Xor
 * Link: https://leetcode.cn/problems/find-the-original-array-of-prefix-xor/
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
    vector<int> findArray(vector<int>& pref) {
        // TODO: 在这里实现你的解法。
        (void)pref;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> pref = {5, 2, 0, 3, 1};
        auto localResult = solution.findArray(pref);
        vector<int> expected = {5, 7, 2, 3, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> pref = {13};
        auto localResult = solution.findArray(pref);
        vector<int> expected = {13};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
