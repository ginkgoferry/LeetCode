/*
 * Problem: 1861. 旋转盒子 / Rotating the Box
 * Link: https://leetcode.cn/problems/rotating-the-box/
 * Chapter: 双指针
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
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        // TODO: 在这里实现你的解法。
        (void)boxGrid;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<char>> boxGrid = {{'#', '.', '#'}};
        auto localResult = solution.rotateTheBox(boxGrid);
        vector<vector<char>> expected = {{'.'}, {'#'}, {'#'}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<char>> boxGrid = {{'#', '.', '*', '.'}, {'#', '#', '*', '.'}};
        auto localResult = solution.rotateTheBox(boxGrid);
        vector<vector<char>> expected = {{'#', '.'}, {'#', '#'}, {'*', '*'}, {'.', '.'}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<char>> boxGrid = {{'#', '#', '*', '.', '*', '.'}, {'#', '#', '#', '*', '.', '.'}, {'#', '#', '#', '.', '#', '.'}};
        auto localResult = solution.rotateTheBox(boxGrid);
        vector<vector<char>> expected = {{'.', '#', '#'}, {'.', '#', '#'}, {'#', '#', '*'}, {'#', '*', '.'}, {'#', '.', '*'}, {'#', '.', '.'}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
