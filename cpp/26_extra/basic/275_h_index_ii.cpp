/*
 * Problem: 275. H 指数 II / H-Index II
 * Link: https://leetcode.cn/problems/h-index-ii/
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
    int hIndex(vector<int>& citations) {
        // TODO: 在这里实现你的解法。
        (void)citations;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> citations = {0, 1, 3, 5, 6};
        auto localResult = solution.hIndex(citations);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> citations = {1, 2, 100};
        auto localResult = solution.hIndex(citations);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
