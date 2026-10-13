/*
 * Problem: 60. 排列序列 / Permutation Sequence
 * Link: https://leetcode.cn/problems/permutation-sequence/
 * Chapter: 数据结构
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
    string getPermutation(int n, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        int k = 3;
        auto localResult = solution.getPermutation(n, k);
        string expected = "213";
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        int k = 9;
        auto localResult = solution.getPermutation(n, k);
        string expected = "2314";
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        int k = 1;
        auto localResult = solution.getPermutation(n, k);
        string expected = "123";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
