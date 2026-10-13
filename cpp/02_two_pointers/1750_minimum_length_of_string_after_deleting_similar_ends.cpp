/*
 * Problem: 1750. 删除字符串两端相同字符后的最短长度 / Minimum Length of String After Deleting Similar Ends
 * Link: https://leetcode.cn/problems/minimum-length-of-string-after-deleting-similar-ends/
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
    int minimumLength(string s) {
        // TODO: 在这里实现你的解法。
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "ca";
        auto localResult = solution.minimumLength(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "cabaabac";
        auto localResult = solution.minimumLength(s);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aabccabba";
        auto localResult = solution.minimumLength(s);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
