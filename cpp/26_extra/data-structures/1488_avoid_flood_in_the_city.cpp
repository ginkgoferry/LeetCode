/*
 * Problem: 1488. 避免洪水泛滥 / Avoid Flood in The City
 * Link: https://leetcode.cn/problems/avoid-flood-in-the-city/
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
    vector<int> avoidFlood(vector<int>& rains) {
        // TODO: 在这里实现你的解法。
        (void)rains;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> rains = {1, 2, 3, 4};
        const auto localOriginalRains = rains;
        auto localResult = solution.avoidFlood(rains);
        assert(localResult.size() == localOriginalRains.size());
        set<int> fullLakes;
        for (size_t i = 0; i < localResult.size(); ++i) {
            if (localOriginalRains[i] > 0) {
                assert(localResult[i] == -1 && !fullLakes.count(localOriginalRains[i]));
                fullLakes.insert(localOriginalRains[i]);
            } else {
                assert(localResult[i] >= 1 && localResult[i] <= 1000000000);
                fullLakes.erase(localResult[i]);
            }
        }
    }

    {
        // 官方样例
        vector<int> rains = {1, 2, 0, 0, 2, 1};
        const auto localOriginalRains = rains;
        auto localResult = solution.avoidFlood(rains);
        assert(localResult.size() == localOriginalRains.size());
        set<int> fullLakes;
        for (size_t i = 0; i < localResult.size(); ++i) {
            if (localOriginalRains[i] > 0) {
                assert(localResult[i] == -1 && !fullLakes.count(localOriginalRains[i]));
                fullLakes.insert(localOriginalRains[i]);
            } else {
                assert(localResult[i] >= 1 && localResult[i] <= 1000000000);
                fullLakes.erase(localResult[i]);
            }
        }
    }

    {
        // 官方样例
        vector<int> rains = {1, 2, 0, 1, 2};
        const auto localOriginalRains = rains;
        auto localResult = solution.avoidFlood(rains);
        assert(localResult.empty());
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
