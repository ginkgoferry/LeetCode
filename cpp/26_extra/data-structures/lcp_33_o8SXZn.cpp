/*
 * Problem: LCP 33. 蓄水 / 蓄水
 * Link: https://leetcode.cn/problems/o8SXZn/
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
    int storeWater(vector<int>& bucket, vector<int>& vat) {
        // TODO: 在这里实现你的解法。
        (void)bucket;
        (void)vat;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> bucket = {1, 3};
        vector<int> vat = {6, 8};
        auto localResult = solution.storeWater(bucket, vat);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> bucket = {9, 0, 1};
        vector<int> vat = {0, 2, 2};
        auto localResult = solution.storeWater(bucket, vat);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
