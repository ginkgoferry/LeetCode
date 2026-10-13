/*
 * Problem: 744. 寻找比目标字母大的最小字母 / Find Smallest Letter Greater Than Target
 * Link: https://leetcode.cn/problems/find-smallest-letter-greater-than-target/
 * Chapter: 二分查找
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
    char nextGreatestLetter(vector<char>& letters, char target) {
        // TODO: 在这里实现你的解法。
        (void)letters;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<char> letters = {'c', 'f', 'j'};
        char target = 'a';
        auto localResult = solution.nextGreatestLetter(letters, target);
        char expected = 'c';
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<char> letters = {'c', 'f', 'j'};
        char target = 'c';
        auto localResult = solution.nextGreatestLetter(letters, target);
        char expected = 'f';
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<char> letters = {'x', 'x', 'y', 'y'};
        char target = 'z';
        auto localResult = solution.nextGreatestLetter(letters, target);
        char expected = 'x';
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
