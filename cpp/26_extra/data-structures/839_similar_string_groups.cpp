/*
 * Problem: 839. 相似字符串组 / Similar String Groups
 * Link: https://leetcode.cn/problems/similar-string-groups/
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
    int numSimilarGroups(vector<string>& strs) {
        // TODO: 在这里实现你的解法。
        (void)strs;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> strs = {"tars", "rats", "arts", "star"};
        auto localResult = solution.numSimilarGroups(strs);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> strs = {"omv", "ovm"};
        auto localResult = solution.numSimilarGroups(strs);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
