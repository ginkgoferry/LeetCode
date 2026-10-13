/*
 * Problem: 969. 煎饼排序 / Pancake Sorting
 * Link: https://leetcode.cn/problems/pancake-sorting/
 * Chapter: 贪心算法
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
    vector<int> pancakeSort(vector<int>& arr) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {3, 2, 4, 1};
        const auto localOriginalArray = arr;
        auto localResult = solution.pancakeSort(arr);
        assert(localResult.size() <= 10 * localOriginalArray.size());
        auto replay = localOriginalArray;
        for (int length : localResult) { assert(length >= 1 && static_cast<size_t>(length) <= replay.size()); reverse(replay.begin(), replay.begin() + length); }
        assert(is_sorted(replay.begin(), replay.end()));
    }

    {
        // 官方样例
        vector<int> arr = {1, 2, 3};
        const auto localOriginalArray = arr;
        auto localResult = solution.pancakeSort(arr);
        assert(localResult.size() <= 10 * localOriginalArray.size());
        auto replay = localOriginalArray;
        for (int length : localResult) { assert(length >= 1 && static_cast<size_t>(length) <= replay.size()); reverse(replay.begin(), replay.begin() + length); }
        assert(is_sorted(replay.begin(), replay.end()));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
