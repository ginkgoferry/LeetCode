/*
 * Problem: 3577. 统计计算机解锁顺序排列数 / Count the Number of Computer Unlocking Permutations
 * Link: https://leetcode.cn/problems/count-the-number-of-computer-unlocking-permutations/
 * Chapter: 贪心算法
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
    int countPermutations(vector<int>& complexity) {
        // TODO: 在这里实现你的解法。
        (void)complexity;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> complexity = {1, 2, 3};
        auto localResult = solution.countPermutations(complexity);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> complexity = {3, 3, 3, 4, 4, 4};
        auto localResult = solution.countPermutations(complexity);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
