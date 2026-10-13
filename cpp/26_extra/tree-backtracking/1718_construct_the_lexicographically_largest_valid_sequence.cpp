/*
 * Problem: 1718. 构建字典序最大的可行序列 / Construct the Lexicographically Largest Valid Sequence
 * Link: https://leetcode.cn/problems/construct-the-lexicographically-largest-valid-sequence/
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
    vector<int> constructDistancedSequence(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        auto localResult = solution.constructDistancedSequence(n);
        vector<int> expected = {3, 1, 2, 3, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        auto localResult = solution.constructDistancedSequence(n);
        vector<int> expected = {5, 3, 1, 4, 3, 5, 2, 4, 2};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
