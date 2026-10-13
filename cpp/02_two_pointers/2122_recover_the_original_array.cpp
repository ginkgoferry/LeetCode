/*
 * Problem: 2122. 还原原数组 / Recover the Original Array
 * Link: https://leetcode.cn/problems/recover-the-original-array/
 * Chapter: 双指针
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
    vector<int> recoverArray(vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 10, 6, 4, 8, 12};
        const auto original = nums;
        auto localResult = solution.recoverArray(nums);
        assert(localResult.size() * 2 == original.size());
        assert(!localResult.empty());
        auto sortedOriginal = original;
        sort(sortedOriginal.begin(), sortedOriginal.end());
        long long k = static_cast<long long>(*min_element(localResult.begin(), localResult.end())) - sortedOriginal.front();
        assert(k > 0);
        vector<long long> rebuilt;
        for (int value : localResult) {
            assert(value > 0);
            rebuilt.push_back(value - k);
            rebuilt.push_back(value + k);
        }
        sort(rebuilt.begin(), rebuilt.end());
        assert(equal(rebuilt.begin(), rebuilt.end(), sortedOriginal.begin()));
    }

    {
        // 官方样例
        vector<int> nums = {1, 1, 3, 3};
        const auto original = nums;
        auto localResult = solution.recoverArray(nums);
        assert(localResult.size() * 2 == original.size());
        assert(!localResult.empty());
        auto sortedOriginal = original;
        sort(sortedOriginal.begin(), sortedOriginal.end());
        long long k = static_cast<long long>(*min_element(localResult.begin(), localResult.end())) - sortedOriginal.front();
        assert(k > 0);
        vector<long long> rebuilt;
        for (int value : localResult) {
            assert(value > 0);
            rebuilt.push_back(value - k);
            rebuilt.push_back(value + k);
        }
        sort(rebuilt.begin(), rebuilt.end());
        assert(equal(rebuilt.begin(), rebuilt.end(), sortedOriginal.begin()));
    }

    {
        // 官方样例
        vector<int> nums = {5, 435};
        const auto original = nums;
        auto localResult = solution.recoverArray(nums);
        assert(localResult.size() * 2 == original.size());
        assert(!localResult.empty());
        auto sortedOriginal = original;
        sort(sortedOriginal.begin(), sortedOriginal.end());
        long long k = static_cast<long long>(*min_element(localResult.begin(), localResult.end())) - sortedOriginal.front();
        assert(k > 0);
        vector<long long> rebuilt;
        for (int value : localResult) {
            assert(value > 0);
            rebuilt.push_back(value - k);
            rebuilt.push_back(value + k);
        }
        sort(rebuilt.begin(), rebuilt.end());
        assert(equal(rebuilt.begin(), rebuilt.end(), sortedOriginal.begin()));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
