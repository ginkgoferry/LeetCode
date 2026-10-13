/*
 * Problem: 2251. 花期内花的数目 / Number of Flowers in Full Bloom
 * Link: https://leetcode.cn/problems/number-of-flowers-in-full-bloom/
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
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        // TODO: 在这里实现你的解法。
        (void)flowers;
        (void)people;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> flowers = {{1, 6}, {3, 7}, {9, 12}, {4, 13}};
        vector<int> people = {2, 3, 7, 11};
        auto localResult = solution.fullBloomFlowers(flowers, people);
        vector<int> expected = {1, 2, 2, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> flowers = {{1, 10}, {3, 3}};
        vector<int> people = {3, 3, 2};
        auto localResult = solution.fullBloomFlowers(flowers, people);
        vector<int> expected = {2, 2, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
