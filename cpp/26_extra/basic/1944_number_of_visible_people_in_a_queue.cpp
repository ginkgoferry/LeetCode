/*
 * Problem: 1944. 队列中可以看到的人数 / Number of Visible People in a Queue
 * Link: https://leetcode.cn/problems/number-of-visible-people-in-a-queue/
 * Chapter: 栈
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
    vector<int> canSeePersonsCount(vector<int>& heights) {
        // TODO: 在这里实现你的解法。
        (void)heights;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> heights = {10, 6, 8, 5, 11, 9};
        auto localResult = solution.canSeePersonsCount(heights);
        vector<int> expected = {3, 1, 2, 1, 1, 0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> heights = {5, 1, 2, 3, 10};
        auto localResult = solution.canSeePersonsCount(heights);
        vector<int> expected = {4, 1, 1, 1, 0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
