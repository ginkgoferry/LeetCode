/*
 * Problem: 1705. 吃苹果的最大数目 / Maximum Number of Eaten Apples
 * Link: https://leetcode.cn/problems/maximum-number-of-eaten-apples/
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
    int eatenApples(vector<int>& apples, vector<int>& days) {
        // TODO: 在这里实现你的解法。
        (void)apples;
        (void)days;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> apples = {1, 2, 3, 5, 2};
        vector<int> days = {3, 2, 1, 4, 2};
        auto localResult = solution.eatenApples(apples, days);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> apples = {3, 0, 0, 0, 0, 2};
        vector<int> days = {3, 0, 0, 0, 0, 2};
        auto localResult = solution.eatenApples(apples, days);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
