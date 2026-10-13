/*
 * Problem: 923. 三数之和的多种可能 / 3Sum With Multiplicity
 * Link: https://leetcode.cn/problems/3sum-with-multiplicity/
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
    int threeSumMulti(vector<int>& arr, int target) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
        int target = 8;
        auto localResult = solution.threeSumMulti(arr, target);
        int expected = 20;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 1, 2, 2, 2, 2};
        int target = 5;
        auto localResult = solution.threeSumMulti(arr, target);
        int expected = 12;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
