/*
 * Problem: 2525. 根据规则将箱子分类 / Categorize Box According to Criteria
 * Link: https://leetcode.cn/problems/categorize-box-according-to-criteria/
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
    string categorizeBox(int length, int width, int height, int mass) {
        // TODO: 在这里实现你的解法。
        (void)length;
        (void)width;
        (void)height;
        (void)mass;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int length = 1000;
        int width = 35;
        int height = 700;
        int mass = 300;
        auto localResult = solution.categorizeBox(length, width, height, mass);
        string expected = "Heavy";
        assert((localResult == expected));
    }

    {
        // 官方样例
        int length = 200;
        int width = 50;
        int height = 800;
        int mass = 50;
        auto localResult = solution.categorizeBox(length, width, height, mass);
        string expected = "Neither";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
