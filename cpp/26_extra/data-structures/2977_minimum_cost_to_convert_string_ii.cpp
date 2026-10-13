/*
 * Problem: 2977. 转换字符串的最小成本 II / Minimum Cost to Convert String II
 * Link: https://leetcode.cn/problems/minimum-cost-to-convert-string-ii/
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
    long long minimumCost(string source, string target, vector<string>& original, vector<string>& changed, vector<int>& cost) {
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
        vector<string> original = {"a", "b", "c", "c", "e", "d"};
        vector<string> changed = {"b", "c", "b", "e", "b", "e"};
        vector<int> cost = {2, 5, 5, 1, 2, 20};
        auto localResult = solution.minimumCost(source, target, original, changed, cost);
        long long expected = 28LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string source = "abcdefgh";
        string target = "acdeeghh";
        vector<string> original = {"bcd", "fgh", "thh"};
        vector<string> changed = {"cde", "thh", "ghh"};
        vector<int> cost = {1, 3, 5};
        auto localResult = solution.minimumCost(source, target, original, changed, cost);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string source = "abcdefgh";
        string target = "addddddd";
        vector<string> original = {"bcd", "defgh"};
        vector<string> changed = {"ddd", "ddddd"};
        vector<int> cost = {100, 1578};
        auto localResult = solution.minimumCost(source, target, original, changed, cost);
        long long expected = -1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
