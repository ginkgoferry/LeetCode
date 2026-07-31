/*
 * Problem: 17. 电话号码的字母组合 / Letter Combinations of a Phone Number
 * Link: https://leetcode.cn/problems/letter-combinations-of-a-phone-number/
 * Chapter: 回溯
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
    vector<string> letterCombinations(string digits) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        string digits = "23";
        auto result = solution.letterCombinations(digits);
        auto expected = vector<string>{"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"};
        sort(result.begin(), result.end());
        sort(expected.begin(), expected.end());
        assert((result == expected));
    }

    {
        string digits = "2";
        auto result = solution.letterCombinations(digits);
        auto expected = vector<string>{"a", "b", "c"};
        sort(result.begin(), result.end());
        sort(expected.begin(), expected.end());
        assert((result == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
