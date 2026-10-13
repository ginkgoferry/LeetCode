/*
 * Problem: 899. 有序队列 / Orderly Queue
 * Link: https://leetcode.cn/problems/orderly-queue/
 * Chapter: 字符串
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
    string orderlyQueue(string s, int k) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "cba";
        int k = 1;
        auto localResult = solution.orderlyQueue(s, k);
        string expected = "acb";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "baaca";
        int k = 3;
        auto localResult = solution.orderlyQueue(s, k);
        string expected = "aaabc";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
