/*
 * Problem: 658. 找到 K 个最接近的元素 / Find K Closest Elements
 * Link: https://leetcode.cn/problems/find-k-closest-elements/
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
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        (void)k;
        (void)x;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {1, 2, 3, 4, 5};
        int k = 4;
        int x = 3;
        auto localResult = solution.findClosestElements(arr, k, x);
        vector<int> expected = {1, 2, 3, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 1, 2, 3, 4, 5};
        int k = 4;
        int x = -1;
        auto localResult = solution.findClosestElements(arr, k, x);
        vector<int> expected = {1, 1, 2, 3};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
