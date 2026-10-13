/*
 * Problem: 1980. 找出不同的二进制字符串 / Find Unique Binary String
 * Link: https://leetcode.cn/problems/find-unique-binary-string/
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
    string findDifferentBinaryString(vector<string>& nums) {
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
        vector<string> nums = {"01", "10"};
        const auto localOriginalStrings = nums;
        auto localResult = solution.findDifferentBinaryString(nums);
        assert(localResult.size() == localOriginalStrings.size());
        for (char ch : localResult) assert(ch == '0' || ch == '1');
        assert(find(localOriginalStrings.begin(), localOriginalStrings.end(), localResult) == localOriginalStrings.end());
    }

    {
        // 官方样例
        vector<string> nums = {"00", "01"};
        const auto localOriginalStrings = nums;
        auto localResult = solution.findDifferentBinaryString(nums);
        assert(localResult.size() == localOriginalStrings.size());
        for (char ch : localResult) assert(ch == '0' || ch == '1');
        assert(find(localOriginalStrings.begin(), localOriginalStrings.end(), localResult) == localOriginalStrings.end());
    }

    {
        // 官方样例
        vector<string> nums = {"111", "011", "001"};
        const auto localOriginalStrings = nums;
        auto localResult = solution.findDifferentBinaryString(nums);
        assert(localResult.size() == localOriginalStrings.size());
        for (char ch : localResult) assert(ch == '0' || ch == '1');
        assert(find(localOriginalStrings.begin(), localOriginalStrings.end(), localResult) == localOriginalStrings.end());
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
