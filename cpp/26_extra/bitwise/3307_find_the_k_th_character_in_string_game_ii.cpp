/*
 * Problem: 3307. 找出第 K 个字符 II / Find the K-th Character in String Game II
 * Link: https://leetcode.cn/problems/find-the-k-th-character-in-string-game-ii/
 * Chapter: 位运算
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
    char kthCharacter(long long k, vector<int>& operations) {
        // TODO: 在这里实现你的解法。
        (void)k;
        (void)operations;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        long long k = 5LL;
        vector<int> operations = {0, 0, 0};
        auto localResult = solution.kthCharacter(k, operations);
        char expected = 'a';
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long k = 10LL;
        vector<int> operations = {0, 1, 0, 1};
        auto localResult = solution.kthCharacter(k, operations);
        char expected = 'b';
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
