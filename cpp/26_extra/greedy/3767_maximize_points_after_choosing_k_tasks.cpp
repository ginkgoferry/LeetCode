/*
 * Problem: 3767. 选择 K 个任务的最大总分数 / Maximize Points After Choosing K Tasks
 * Link: https://leetcode.cn/problems/maximize-points-after-choosing-k-tasks/
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
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        // TODO: 在这里实现你的解法。
        (void)technique1;
        (void)technique2;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> technique1 = {5, 2, 10};
        vector<int> technique2 = {10, 3, 8};
        int k = 2;
        auto localResult = solution.maxPoints(technique1, technique2, k);
        long long expected = 22LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> technique1 = {10, 20, 30};
        vector<int> technique2 = {5, 15, 25};
        int k = 2;
        auto localResult = solution.maxPoints(technique1, technique2, k);
        long long expected = 60LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> technique1 = {1, 2, 3};
        vector<int> technique2 = {4, 5, 6};
        int k = 0;
        auto localResult = solution.maxPoints(technique1, technique2, k);
        long long expected = 15LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
