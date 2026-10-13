/*
 * Problem: 2976. 转换字符串的最小成本 I / Minimum Cost to Convert String I
 * Link: https://leetcode.cn/problems/minimum-cost-to-convert-string-i/
 * Chapter: 图论
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
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        // TODO: 在这里实现你的解法。
        (void)source;
        (void)target;
        (void)original;
        (void)changed;
        (void)cost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string source = "abcd";
        string target = "acbe";
        vector<char> original = {'a', 'b', 'c', 'c', 'e', 'd'};
        vector<char> changed = {'b', 'c', 'b', 'e', 'b', 'e'};
        vector<int> cost = {2, 5, 5, 1, 2, 20};
        auto localResult = solution.minimumCost(source, target, original, changed, cost);
        long long expected = 28LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string source = "aaaa";
        string target = "bbbb";
        vector<char> original = {'a', 'c'};
        vector<char> changed = {'c', 'b'};
        vector<int> cost = {1, 2};
        auto localResult = solution.minimumCost(source, target, original, changed, cost);
        long long expected = 12LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string source = "abcd";
        string target = "abce";
        vector<char> original = {'a'};
        vector<char> changed = {'e'};
        vector<int> cost = {10000};
        auto localResult = solution.minimumCost(source, target, original, changed, cost);
        long long expected = -1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
