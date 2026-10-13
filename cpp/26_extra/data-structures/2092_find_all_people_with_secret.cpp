/*
 * Problem: 2092. 找出知晓秘密的所有专家 / Find All People With Secret
 * Link: https://leetcode.cn/problems/find-all-people-with-secret/
 * Chapter: 图论
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
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)meetings;
        (void)firstPerson;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 6;
        vector<vector<int>> meetings = {{1, 2, 5}, {2, 3, 8}, {1, 5, 10}};
        int firstPerson = 1;
        auto localResult = solution.findAllPeople(n, meetings, firstPerson);
        vector<int> expected = {0, 1, 2, 3, 5};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> meetings = {{3, 1, 3}, {1, 2, 2}, {0, 3, 3}};
        int firstPerson = 3;
        auto localResult = solution.findAllPeople(n, meetings, firstPerson);
        vector<int> expected = {0, 1, 3};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> meetings = {{3, 4, 2}, {1, 2, 1}, {2, 3, 1}};
        int firstPerson = 1;
        auto localResult = solution.findAllPeople(n, meetings, firstPerson);
        vector<int> expected = {0, 1, 2, 3, 4};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
