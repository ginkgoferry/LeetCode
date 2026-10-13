/*
 * Problem: 3074. 重新分装苹果 / Apple Redistribution into Boxes
 * Link: https://leetcode.cn/problems/apple-redistribution-into-boxes/
 * Chapter: 贪心算法
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
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        // TODO: 在这里实现你的解法。
        (void)apple;
        (void)capacity;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> apple = {1, 3, 2};
        vector<int> capacity = {4, 3, 1, 5, 2};
        auto localResult = solution.minimumBoxes(apple, capacity);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> apple = {5, 5, 5};
        vector<int> capacity = {2, 4, 2, 7};
        auto localResult = solution.minimumBoxes(apple, capacity);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
