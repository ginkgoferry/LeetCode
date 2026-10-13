/*
 * Problem: 753. 破解保险箱 / Cracking the Safe
 * Link: https://leetcode.cn/problems/cracking-the-safe/
 * Chapter: 图论
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
    string crackSafe(int n, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 1;
        int k = 2;
        auto localResult = solution.crackSafe(n, k);
        size_t combinations = 1; for (int i = 0; i < n; ++i) combinations *= k;
        assert(localResult.size() == combinations + n - 1);
        for (char ch : localResult) assert(ch >= '0' && ch < '0' + k);
        set<string> observed;
        for (size_t i = 0; i + n <= localResult.size(); ++i) observed.insert(localResult.substr(i, n));
        assert(observed.size() == combinations);
    }

    {
        // 官方样例
        int n = 2;
        int k = 2;
        auto localResult = solution.crackSafe(n, k);
        size_t combinations = 1; for (int i = 0; i < n; ++i) combinations *= k;
        assert(localResult.size() == combinations + n - 1);
        for (char ch : localResult) assert(ch >= '0' && ch < '0' + k);
        set<string> observed;
        for (size_t i = 0; i + n <= localResult.size(); ++i) observed.insert(localResult.substr(i, n));
        assert(observed.size() == combinations);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
