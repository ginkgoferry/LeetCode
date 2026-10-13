/*
 * Problem: 3816. 删除重复字符后的字典序最小字符串 / Lexicographically Smallest String After Deleting Duplicate Characters
 * Link: https://leetcode.cn/problems/lexicographically-smallest-string-after-deleting-duplicate-characters/
 * Chapter: 栈
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
    string lexSmallestAfterDeletion(string s) {
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
        string s = "aaccb";
        auto localResult = solution.lexSmallestAfterDeletion(s);
        string expected = "aacb";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "z";
        auto localResult = solution.lexSmallestAfterDeletion(s);
        string expected = "z";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
