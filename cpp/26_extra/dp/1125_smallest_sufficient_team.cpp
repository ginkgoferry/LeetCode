/*
 * Problem: 1125. 最小的必要团队 / Smallest Sufficient Team
 * Link: https://leetcode.cn/problems/smallest-sufficient-team/
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
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
        // TODO: 在这里实现你的解法。
        (void)req_skills;
        (void)people;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> req_skills = {"java", "nodejs", "reactjs"};
        vector<vector<string>> people = {{"java"}, {"nodejs"}, {"nodejs", "reactjs"}};
        auto localResult = solution.smallestSufficientTeam(req_skills, people);
        vector<int> expected = {0, 2};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> req_skills = {"algorithms", "math", "java", "reactjs", "csharp", "aws"};
        vector<vector<string>> people = {{"algorithms", "math", "java"}, {"algorithms", "math", "reactjs"}, {"java", "csharp", "aws"}, {"reactjs", "csharp"}, {"csharp", "math"}, {"aws", "java"}};
        auto localResult = solution.smallestSufficientTeam(req_skills, people);
        vector<int> expected = {1, 2};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
