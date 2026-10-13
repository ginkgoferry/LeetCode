/*
 * Problem: LCS 2. 完成一半题目 / 完成一半题目
 * Link: https://leetcode.cn/problems/WqXACV/
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
    int halfQuestions(vector<int>& questions) {
        // TODO: 在这里实现你的解法。
        (void)questions;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> questions = {2, 1, 6, 2};
        auto localResult = solution.halfQuestions(questions);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> questions = {1, 5, 1, 3, 4, 5, 2, 5, 3, 3, 8, 6};
        auto localResult = solution.halfQuestions(questions);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
