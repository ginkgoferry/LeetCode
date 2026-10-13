/*
 * Problem: 2157. 字符串分组 / Groups of Strings
 * Link: https://leetcode.cn/problems/groups-of-strings/
 * Chapter: 数据结构
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
    vector<int> groupStrings(vector<string>& words) {
        // TODO: 在这里实现你的解法。
        (void)words;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> words = {"a", "b", "ab", "cde"};
        auto localResult = solution.groupStrings(words);
        vector<int> expected = {2, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"a", "ab", "abc"};
        auto localResult = solution.groupStrings(words);
        vector<int> expected = {1, 3};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
