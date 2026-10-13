/*
 * Problem: 2024. 考试的最大困扰度 / Maximize the Confusion of an Exam
 * Link: https://leetcode.cn/problems/maximize-the-confusion-of-an-exam/
 * Chapter: 滑动窗口
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
    int maxConsecutiveAnswers(string answerKey, int k) {
        // TODO: 在这里实现你的解法。
        (void)answerKey;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string answerKey = "TTFF";
        int k = 2;
        auto localResult = solution.maxConsecutiveAnswers(answerKey, k);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string answerKey = "TFFT";
        int k = 1;
        auto localResult = solution.maxConsecutiveAnswers(answerKey, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string answerKey = "TTFTTFTT";
        int k = 1;
        auto localResult = solution.maxConsecutiveAnswers(answerKey, k);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
