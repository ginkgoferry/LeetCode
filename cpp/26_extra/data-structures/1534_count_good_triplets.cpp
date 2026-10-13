/*
 * Problem: 1534. 统计好三元组 / Count Good Triplets
 * Link: https://leetcode.cn/problems/count-good-triplets/
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
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        (void)a;
        (void)b;
        (void)c;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {3, 0, 1, 1, 9, 7};
        int a = 7;
        int b = 2;
        int c = 3;
        auto localResult = solution.countGoodTriplets(arr, a, b, c);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 1, 2, 2, 3};
        int a = 0;
        int b = 0;
        int c = 1;
        auto localResult = solution.countGoodTriplets(arr, a, b, c);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
