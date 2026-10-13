/*
 * Problem: 3853. 合并靠近字符 / Merge Close Characters
 * Link: https://leetcode.cn/problems/merge-close-characters/
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
    string mergeCharacters(string s, int k) {
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
        string s = "abca";
        int k = 3;
        auto localResult = solution.mergeCharacters(s, k);
        string expected = "abc";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aabca";
        int k = 2;
        auto localResult = solution.mergeCharacters(s, k);
        string expected = "abca";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "yybyzybz";
        int k = 2;
        auto localResult = solution.mergeCharacters(s, k);
        string expected = "ybzybz";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
