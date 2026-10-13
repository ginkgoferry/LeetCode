/*
 * Problem: 942. 增减字符串匹配 / DI String Match
 * Link: https://leetcode.cn/problems/di-string-match/
 * Chapter: 贪心算法
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
    vector<int> diStringMatch(string s) {
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
        string s = "IDID";
        auto localResult = solution.diStringMatch(s);
        assert(localResult.size() == s.size() + 1);
        set<int> values;
        for (int value : localResult) { assert(value >= 0 && value < static_cast<int>(localResult.size()) + 0); assert(values.insert(value).second); }
        for (size_t i = 0; i < s.size(); ++i) assert(s[i] == 'I' ? localResult[i] < localResult[i+1] : localResult[i] > localResult[i+1]);
    }

    {
        // 官方样例
        string s = "III";
        auto localResult = solution.diStringMatch(s);
        assert(localResult.size() == s.size() + 1);
        set<int> values;
        for (int value : localResult) { assert(value >= 0 && value < static_cast<int>(localResult.size()) + 0); assert(values.insert(value).second); }
        for (size_t i = 0; i < s.size(); ++i) assert(s[i] == 'I' ? localResult[i] < localResult[i+1] : localResult[i] > localResult[i+1]);
    }

    {
        // 官方样例
        string s = "DDI";
        auto localResult = solution.diStringMatch(s);
        assert(localResult.size() == s.size() + 1);
        set<int> values;
        for (int value : localResult) { assert(value >= 0 && value < static_cast<int>(localResult.size()) + 0); assert(values.insert(value).second); }
        for (size_t i = 0; i < s.size(); ++i) assert(s[i] == 'I' ? localResult[i] < localResult[i+1] : localResult[i] > localResult[i+1]);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
