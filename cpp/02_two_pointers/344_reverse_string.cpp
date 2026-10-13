/*
 * Problem: 344. 反转字符串 / Reverse String
 * Link: https://leetcode.cn/problems/reverse-string/
 * Chapter: 双指针
 * Difficulty: Easy
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
    void reverseString(vector<char>& s) {
        // TODO: 在这里实现你的解法。
        (void)s;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<char> s = {'h', 'e', 'l', 'l', 'o'};
        solution.reverseString(s);
        vector<char> expected = {'o', 'l', 'l', 'e', 'h'};
        assert((s == expected));
    }

    {
        // 官方样例
        vector<char> s = {'H', 'a', 'n', 'n', 'a', 'h'};
        solution.reverseString(s);
        vector<char> expected = {'h', 'a', 'n', 'n', 'a', 'H'};
        assert((s == expected));
    }

    {
        // 额外边界用例
        vector<char> s = {'a'};
        solution.reverseString(s);
        vector<char> expected = {'a'};
        assert((s == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
