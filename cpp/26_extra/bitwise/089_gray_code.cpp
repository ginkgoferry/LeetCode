/*
 * Problem: 89. 格雷编码 / Gray Code
 * Link: https://leetcode.cn/problems/gray-code/
 * Chapter: 位运算
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
    vector<int> grayCode(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        auto localResult = solution.grayCode(n);
        assert(localResult.size() == (size_t{1} << n));
        assert(localResult.front() == 0);
        vector<bool> seen(size_t{1} << n, false);
        for (size_t i = 0; i < localResult.size(); ++i) {
            int value = localResult[i];
            assert(value >= 0 && static_cast<size_t>(value) < seen.size());
            assert(!seen[value]); seen[value] = true;
            if (localResult.size() > 1) {
                int bits = value ^ localResult[(i + 1) % localResult.size()];
                assert(bits > 0 && (bits & (bits - 1)) == 0);
            }
        }
    }

    {
        // 官方样例
        int n = 1;
        auto localResult = solution.grayCode(n);
        assert(localResult.size() == (size_t{1} << n));
        assert(localResult.front() == 0);
        vector<bool> seen(size_t{1} << n, false);
        for (size_t i = 0; i < localResult.size(); ++i) {
            int value = localResult[i];
            assert(value >= 0 && static_cast<size_t>(value) < seen.size());
            assert(!seen[value]); seen[value] = true;
            if (localResult.size() > 1) {
                int bits = value ^ localResult[(i + 1) % localResult.size()];
                assert(bits > 0 && (bits & (bits - 1)) == 0);
            }
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
