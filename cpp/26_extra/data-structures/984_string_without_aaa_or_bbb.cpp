/*
 * Problem: 984. 不含 AAA 或 BBB 的字符串 / String Without AAA or BBB
 * Link: https://leetcode.cn/problems/string-without-aaa-or-bbb/
 * Chapter: 数据结构
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
    string strWithout3a3b(int a, int b) {
        // TODO: 在这里实现你的解法。
        (void)a;
        (void)b;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int a = 1;
        int b = 2;
        auto localResult = solution.strWithout3a3b(a, b);
        assert(localResult.size() == 3);
        assert(count(localResult.begin(), localResult.end(), 'a') == a);
        assert(count(localResult.begin(), localResult.end(), 'b') == b);
        for (char ch : localResult) assert(ch == 'a' || ch == 'b');
        for (size_t i = 2; i < localResult.size(); ++i)
            assert(localResult[i] != localResult[i-1] || localResult[i] != localResult[i-2]);
    }

    {
        // 官方样例
        int a = 4;
        int b = 1;
        auto localResult = solution.strWithout3a3b(a, b);
        assert(localResult.size() == 5);
        assert(count(localResult.begin(), localResult.end(), 'a') == a);
        assert(count(localResult.begin(), localResult.end(), 'b') == b);
        for (char ch : localResult) assert(ch == 'a' || ch == 'b');
        for (size_t i = 2; i < localResult.size(); ++i)
            assert(localResult[i] != localResult[i-1] || localResult[i] != localResult[i-2]);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
