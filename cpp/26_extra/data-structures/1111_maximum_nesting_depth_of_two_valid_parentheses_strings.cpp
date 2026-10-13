/*
 * Problem: 1111. 有效括号的嵌套深度 / Maximum Nesting Depth of Two Valid Parentheses Strings
 * Link: https://leetcode.cn/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
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
    vector<int> maxDepthAfterSplit(string seq) {
        // TODO: 在这里实现你的解法。
        (void)seq;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string seq = "(()())";
        const auto localOriginalSequence = seq;
        auto localResult = solution.maxDepthAfterSplit(seq);
        assert(localResult.size() == localOriginalSequence.size());
        int depths[2] = {0, 0}; int maximum = 0;
        for (size_t i = 0; i < localResult.size(); ++i) {
            int group = localResult[i]; assert(group == 0 || group == 1);
            depths[group] += localOriginalSequence[i] == '(' ? 1 : -1;
            assert(depths[group] >= 0); maximum = max(maximum, depths[group]);
        }
        assert(depths[0] == 0 && depths[1] == 0 && maximum == 1);
    }

    {
        // 官方样例
        string seq = "()(())()";
        const auto localOriginalSequence = seq;
        auto localResult = solution.maxDepthAfterSplit(seq);
        assert(localResult.size() == localOriginalSequence.size());
        int depths[2] = {0, 0}; int maximum = 0;
        for (size_t i = 0; i < localResult.size(); ++i) {
            int group = localResult[i]; assert(group == 0 || group == 1);
            depths[group] += localOriginalSequence[i] == '(' ? 1 : -1;
            assert(depths[group] >= 0); maximum = max(maximum, depths[group]);
        }
        assert(depths[0] == 0 && depths[1] == 0 && maximum == 1);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
