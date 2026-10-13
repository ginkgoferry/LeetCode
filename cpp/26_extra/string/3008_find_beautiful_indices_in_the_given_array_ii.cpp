/*
 * Problem: 3008. 找出数组中的美丽下标 II / Find Beautiful Indices in the Given Array II
 * Link: https://leetcode.cn/problems/find-beautiful-indices-in-the-given-array-ii/
 * Chapter: 字符串
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
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)a;
        (void)b;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "isawsquirrelnearmysquirrelhouseohmy";
        string a = "my";
        string b = "squirrel";
        int k = 15;
        auto localResult = solution.beautifulIndices(s, a, b, k);
        vector<int> expected = {16, 33};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcd";
        string a = "a";
        string b = "a";
        int k = 4;
        auto localResult = solution.beautifulIndices(s, a, b, k);
        vector<int> expected = {0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
