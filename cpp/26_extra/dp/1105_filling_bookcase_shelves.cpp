/*
 * Problem: 1105. 填充书架 / Filling Bookcase Shelves
 * Link: https://leetcode.cn/problems/filling-bookcase-shelves/
 * Chapter: 动态规划
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
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        // TODO: 在这里实现你的解法。
        (void)books;
        (void)shelfWidth;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> books = {{1, 1}, {2, 3}, {2, 3}, {1, 1}, {1, 1}, {1, 1}, {1, 2}};
        int shelfWidth = 4;
        auto localResult = solution.minHeightShelves(books, shelfWidth);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> books = {{1, 3}, {2, 4}, {3, 2}};
        int shelfWidth = 6;
        auto localResult = solution.minHeightShelves(books, shelfWidth);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
