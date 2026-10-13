/*
 * Problem: 1054. 距离相等的条形码 / Distant Barcodes
 * Link: https://leetcode.cn/problems/distant-barcodes/
 * Chapter: 数据结构
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
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        // TODO: 在这里实现你的解法。
        (void)barcodes;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> barcodes = {1, 1, 1, 2, 2, 2};
        const auto localOriginalBarcodes = barcodes;
        auto localResult = solution.rearrangeBarcodes(barcodes);
        assert(localResult.size() == localOriginalBarcodes.size());
        auto sortedInput = localOriginalBarcodes; auto sortedOutput = localResult;
        sort(sortedInput.begin(), sortedInput.end()); sort(sortedOutput.begin(), sortedOutput.end());
        assert(sortedInput == sortedOutput);
        for (size_t i = 1; i < localResult.size(); ++i) assert(localResult[i] != localResult[i-1]);
    }

    {
        // 官方样例
        vector<int> barcodes = {1, 1, 1, 1, 2, 2, 3, 3};
        const auto localOriginalBarcodes = barcodes;
        auto localResult = solution.rearrangeBarcodes(barcodes);
        assert(localResult.size() == localOriginalBarcodes.size());
        auto sortedInput = localOriginalBarcodes; auto sortedOutput = localResult;
        sort(sortedInput.begin(), sortedInput.end()); sort(sortedOutput.begin(), sortedOutput.end());
        assert(sortedInput == sortedOutput);
        for (size_t i = 1; i < localResult.size(); ++i) assert(localResult[i] != localResult[i-1]);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
