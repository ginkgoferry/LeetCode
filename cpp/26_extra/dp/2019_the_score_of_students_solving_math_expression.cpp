/*
 * Problem: 2019. 解出数学表达式的学生分数 / The Score of Students Solving Math Expression
 * Link: https://leetcode.cn/problems/the-score-of-students-solving-math-expression/
 * Chapter: 动态规划
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
    int scoreOfStudents(string s, vector<int>& answers) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)answers;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "7+3*1*2";
        vector<int> answers = {20, 13, 42};
        auto localResult = solution.scoreOfStudents(s, answers);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "3+5*2";
        vector<int> answers = {13, 0, 10, 13, 13, 16, 16};
        auto localResult = solution.scoreOfStudents(s, answers);
        int expected = 19;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "6+0*1";
        vector<int> answers = {12, 9, 6, 4, 8, 6};
        auto localResult = solution.scoreOfStudents(s, answers);
        int expected = 10;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
