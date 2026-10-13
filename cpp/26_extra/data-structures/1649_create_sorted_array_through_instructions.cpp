/*
 * Problem: 1649. 通过指令创建有序数组 / Create Sorted Array through Instructions
 * Link: https://leetcode.cn/problems/create-sorted-array-through-instructions/
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
    int createSortedArray(vector<int>& instructions) {
        // TODO: 在这里实现你的解法。
        (void)instructions;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> instructions = {1, 5, 6, 2};
        auto localResult = solution.createSortedArray(instructions);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> instructions = {1, 2, 3, 6, 5, 4};
        auto localResult = solution.createSortedArray(instructions);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> instructions = {1, 3, 3, 3, 2, 4, 2, 1, 2};
        auto localResult = solution.createSortedArray(instructions);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
