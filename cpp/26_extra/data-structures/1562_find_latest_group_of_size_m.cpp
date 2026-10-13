/*
 * Problem: 1562. 查找大小为 M 的最新分组 / Find Latest Group of Size M
 * Link: https://leetcode.cn/problems/find-latest-group-of-size-m/
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
    int findLatestStep(vector<int>& arr, int m) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        (void)m;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {3, 5, 1, 2, 4};
        int m = 1;
        auto localResult = solution.findLatestStep(arr, m);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {3, 1, 5, 4, 2};
        int m = 2;
        auto localResult = solution.findLatestStep(arr, m);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1};
        int m = 1;
        auto localResult = solution.findLatestStep(arr, m);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {2, 1};
        int m = 2;
        auto localResult = solution.findLatestStep(arr, m);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
