/*
 * Problem: 394. 字符串解码 / Decode String
 * Link: https://leetcode.cn/problems/decode-string/
 * Chapter: 栈
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
    string decodeString(string s) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        string s = "3[a]2[bc]";
        assert((solution.decodeString(s) == "aaabcbc"));
    }

    {
        string s = "3[a2[c]]";
        assert((solution.decodeString(s) == "accaccacc"));
    }

    {
        string s = "2[abc]3[cd]ef";
        assert((solution.decodeString(s) == "abcabccdcdcdef"));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
