/*
 * Problem: 1095. 山脉数组中查找目标值 / Find in Mountain Array
 * Link: https://leetcode.cn/problems/find-in-mountain-array/
 * Chapter: 二分查找
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
    int findInMountainArray(int target, MountainArray &mountainArr) {
        // TODO: 在这里实现你的解法。
        (void)target;
        (void)mountainArr;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        MountainArray mountainArr(vector<int>{1, 2, 3, 4, 5, 3, 1});
        int target = 3;
        auto localResult = solution.findInMountainArray(target, mountainArr);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        MountainArray mountainArr(vector<int>{0, 1, 2, 4, 2, 1});
        int target = 3;
        auto localResult = solution.findInMountainArray(target, mountainArr);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
