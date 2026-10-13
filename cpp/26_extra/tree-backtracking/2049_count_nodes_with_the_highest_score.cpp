/*
 * Problem: 2049. 统计最高分的节点数目 / Count Nodes With the Highest Score
 * Link: https://leetcode.cn/problems/count-nodes-with-the-highest-score/
 * Chapter: 树与回溯
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
    int countHighestScoreNodes(vector<int>& parents) {
        // TODO: 在这里实现你的解法。
        (void)parents;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> parents = {-1, 2, 0, 2, 0};
        auto localResult = solution.countHighestScoreNodes(parents);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> parents = {-1, 2, 0};
        auto localResult = solution.countHighestScoreNodes(parents);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
