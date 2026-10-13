/*
 * Problem: 2300. 咒语和药水的成功对数 / Successful Pairs of Spells and Potions
 * Link: https://leetcode.cn/problems/successful-pairs-of-spells-and-potions/
 * Chapter: 二分查找
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
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        // TODO: 在这里实现你的解法。
        (void)spells;
        (void)potions;
        (void)success;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> spells = {5, 1, 3};
        vector<int> potions = {1, 2, 3, 4, 5};
        long long success = 7LL;
        auto localResult = solution.successfulPairs(spells, potions, success);
        vector<int> expected = {4, 0, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> spells = {3, 1, 2};
        vector<int> potions = {8, 5, 8};
        long long success = 16LL;
        auto localResult = solution.successfulPairs(spells, potions, success);
        vector<int> expected = {2, 0, 2};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
