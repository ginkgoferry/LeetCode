/*
 * Problem: 3044. 出现频率最高的质数 / Most Frequent Prime
 * Link: https://leetcode.cn/problems/most-frequent-prime/
 * Chapter: 数学
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
    int mostFrequentPrime(vector<vector<int>>& mat) {
        // TODO: 在这里实现你的解法。
        (void)mat;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> mat = {{1, 1}, {9, 9}, {1, 1}};
        auto localResult = solution.mostFrequentPrime(mat);
        int expected = 19;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> mat = {{7}};
        auto localResult = solution.mostFrequentPrime(mat);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> mat = {{9, 7, 8}, {4, 6, 5}, {2, 8, 6}};
        auto localResult = solution.mostFrequentPrime(mat);
        int expected = 97;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
