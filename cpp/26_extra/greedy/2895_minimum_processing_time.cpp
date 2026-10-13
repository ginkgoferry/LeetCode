/*
 * Problem: 2895. 最小处理时间 / Minimum Processing Time
 * Link: https://leetcode.cn/problems/minimum-processing-time/
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
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        // TODO: 在这里实现你的解法。
        (void)processorTime;
        (void)tasks;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> processorTime = {8, 10};
        vector<int> tasks = {2, 2, 3, 1, 8, 7, 4, 5};
        auto localResult = solution.minProcessingTime(processorTime, tasks);
        int expected = 16;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> processorTime = {10, 20};
        vector<int> tasks = {2, 3, 1, 2, 5, 8, 4, 3};
        auto localResult = solution.minProcessingTime(processorTime, tasks);
        int expected = 23;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
