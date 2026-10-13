/*
 * Problem: 135. 分发糖果 / Candy
 * Link: https://leetcode.cn/problems/candy/
 * Chapter: 分组循环
 * Difficulty: Hard
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
    int candy(vector<int>& ratings) {
        // TODO: 在这里实现你的解法。
        (void)ratings;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> ratings = {1, 0, 2};
        auto localResult = solution.candy(ratings);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> ratings = {1, 2, 2};
        auto localResult = solution.candy(ratings);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
