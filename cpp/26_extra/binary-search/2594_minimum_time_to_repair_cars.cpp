/*
 * Problem: 2594. 修车的最少时间 / Minimum Time to Repair Cars
 * Link: https://leetcode.cn/problems/minimum-time-to-repair-cars/
 * Chapter: 二分查找
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
    long long repairCars(vector<int>& ranks, int cars) {
        // TODO: 在这里实现你的解法。
        (void)ranks;
        (void)cars;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> ranks = {4, 2, 3, 1};
        int cars = 10;
        auto localResult = solution.repairCars(ranks, cars);
        long long expected = 16LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> ranks = {5, 1, 8};
        int cars = 6;
        auto localResult = solution.repairCars(ranks, cars);
        long long expected = 16LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
