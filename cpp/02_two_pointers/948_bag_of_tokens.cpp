/*
 * Problem: 948. 令牌放置 / Bag of Tokens
 * Link: https://leetcode.cn/problems/bag-of-tokens/
 * Chapter: 双指针
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
    int bagOfTokensScore(vector<int>& tokens, int power) {
        // TODO: 在这里实现你的解法。
        (void)tokens;
        (void)power;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> tokens = {100};
        int power = 50;
        auto localResult = solution.bagOfTokensScore(tokens, power);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> tokens = {200, 100};
        int power = 150;
        auto localResult = solution.bagOfTokensScore(tokens, power);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> tokens = {100, 200, 300, 400};
        int power = 200;
        auto localResult = solution.bagOfTokensScore(tokens, power);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
