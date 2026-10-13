/*
 * Problem: 1089. 复写零 / Duplicate Zeros
 * Link: https://leetcode.cn/problems/duplicate-zeros/
 * Chapter: 双指针
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
    void duplicateZeros(vector<int>& arr) {
        // TODO: 在这里实现你的解法。
        (void)arr;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};
        solution.duplicateZeros(arr);
        vector<int> expected = {1, 0, 0, 2, 3, 0, 0, 4};
        assert((arr == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 2, 3};
        solution.duplicateZeros(arr);
        vector<int> expected = {1, 2, 3};
        assert((arr == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
