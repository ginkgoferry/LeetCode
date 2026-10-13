/*
 * Problem: 1481. 不同整数的最少数目 / Least Number of Unique Integers after K Removals
 * Link: https://leetcode.cn/problems/least-number-of-unique-integers-after-k-removals/
 * Chapter: 贪心算法
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
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {5, 5, 4};
        int k = 1;
        auto localResult = solution.findLeastNumOfUniqueInts(arr, k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {4, 3, 1, 1, 3, 3, 2};
        int k = 3;
        auto localResult = solution.findLeastNumOfUniqueInts(arr, k);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
