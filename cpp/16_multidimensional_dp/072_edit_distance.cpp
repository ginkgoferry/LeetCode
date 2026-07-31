/*
 * Problem: 72. 编辑距离 / Edit Distance
 * Link: https://leetcode.cn/problems/edit-distance/
 * Chapter: 多维动态规划
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
    int minDistance(string word1, string word2) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        string word1 = "horse";
        string word2 = "ros";
        assert((solution.minDistance(word1, word2) == 3));
    }

    {
        string word1 = "intention";
        string word2 = "execution";
        assert((solution.minDistance(word1, word2) == 5));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
