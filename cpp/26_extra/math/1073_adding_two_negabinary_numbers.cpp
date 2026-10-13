/*
 * Problem: 1073. 负二进制数相加 / Adding Two Negabinary Numbers
 * Link: https://leetcode.cn/problems/adding-two-negabinary-numbers/
 * Chapter: 数学
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
    vector<int> addNegabinary(vector<int>& arr1, vector<int>& arr2) {
        // TODO: 在这里实现你的解法。
        (void)arr1;
        (void)arr2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr1 = {1, 1, 1, 1, 1};
        vector<int> arr2 = {1, 0, 1};
        auto localResult = solution.addNegabinary(arr1, arr2);
        vector<int> expected = {1, 0, 0, 0, 0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr1 = {0};
        vector<int> arr2 = {0};
        auto localResult = solution.addNegabinary(arr1, arr2);
        vector<int> expected = {0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr1 = {0};
        vector<int> arr2 = {1};
        auto localResult = solution.addNegabinary(arr1, arr2);
        vector<int> expected = {1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
