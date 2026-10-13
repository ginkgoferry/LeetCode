/*
 * Problem: 767. 重构字符串 / Reorganize String
 * Link: https://leetcode.cn/problems/reorganize-string/
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
    string reorganizeString(string s) {
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
        string s = "aab";
        const auto localOriginalString = s;
        auto localResult = solution.reorganizeString(s);
        assert(localResult.size() == localOriginalString.size());
        auto sortedInput = localOriginalString; auto sortedOutput = localResult;
        sort(sortedInput.begin(), sortedInput.end()); sort(sortedOutput.begin(), sortedOutput.end());
        assert(sortedInput == sortedOutput);
        for (size_t i = 1; i < localResult.size(); ++i) assert(localResult[i] != localResult[i-1]);
    }

    {
        // 官方样例
        string s = "aaab";
        const auto localOriginalString = s;
        auto localResult = solution.reorganizeString(s);
        assert(localResult.empty());
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
