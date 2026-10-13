/*
 * Problem: 870. 优势洗牌 / Advantage Shuffle
 * Link: https://leetcode.cn/problems/advantage-shuffle/
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
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        // TODO: 在这里实现你的解法。
        (void)nums1;
        (void)nums2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums1 = {2, 7, 11, 15};
        vector<int> nums2 = {1, 10, 4, 11};
        const auto localOriginalFirst = nums1;
        const auto localOriginalSecond = nums2;
        auto localResult = solution.advantageCount(nums1, nums2);
        auto sortedInput = localOriginalFirst; auto sortedOutput = localResult;
        sort(sortedInput.begin(), sortedInput.end()); sort(sortedOutput.begin(), sortedOutput.end());
        assert(sortedInput == sortedOutput);
        int advantages = 0;
        for (size_t i = 0; i < localResult.size(); ++i) advantages += localResult[i] > localOriginalSecond[i];
        assert(advantages == 4);
    }

    {
        // 官方样例
        vector<int> nums1 = {12, 24, 8, 32};
        vector<int> nums2 = {13, 25, 32, 11};
        const auto localOriginalFirst = nums1;
        const auto localOriginalSecond = nums2;
        auto localResult = solution.advantageCount(nums1, nums2);
        auto sortedInput = localOriginalFirst; auto sortedOutput = localResult;
        sort(sortedInput.begin(), sortedInput.end()); sort(sortedOutput.begin(), sortedOutput.end());
        assert(sortedInput == sortedOutput);
        int advantages = 0;
        for (size_t i = 0; i < localResult.size(); ++i) advantages += localResult[i] > localOriginalSecond[i];
        assert(advantages == 3);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
