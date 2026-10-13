/*
 * Problem: 528. 按权重随机选择 / Random Pick with Weight
 * Link: https://leetcode.cn/problems/random-pick-with-weight/
 * Chapter: 数学
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
    Solution(vector<int>& w) {
        // TODO: 在这里实现你的解法。
        (void)w;
    }
    
    int pickIndex() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        vector<int> w = {1};
        const auto localOriginalWeights = w;
        // 随机接口检查结果合法性；概率分布需要另行验证。
        Solution localObject(w);
        {
            auto localResult = localObject.pickIndex();
            assert(localResult >= 0 && static_cast<size_t>(localResult) < localOriginalWeights.size());
            assert(localOriginalWeights[localResult] > 0);
        }
    }

    {
        // 官方操作序列
        vector<int> w = {1, 3};
        const auto localOriginalWeights = w;
        // 随机接口检查结果合法性；概率分布需要另行验证。
        Solution localObject(w);
        {
            auto localResult = localObject.pickIndex();
            assert(localResult >= 0 && static_cast<size_t>(localResult) < localOriginalWeights.size());
            assert(localOriginalWeights[localResult] > 0);
        }
        {
            auto localResult = localObject.pickIndex();
            assert(localResult >= 0 && static_cast<size_t>(localResult) < localOriginalWeights.size());
            assert(localOriginalWeights[localResult] > 0);
        }
        {
            auto localResult = localObject.pickIndex();
            assert(localResult >= 0 && static_cast<size_t>(localResult) < localOriginalWeights.size());
            assert(localOriginalWeights[localResult] > 0);
        }
        {
            auto localResult = localObject.pickIndex();
            assert(localResult >= 0 && static_cast<size_t>(localResult) < localOriginalWeights.size());
            assert(localOriginalWeights[localResult] > 0);
        }
        {
            auto localResult = localObject.pickIndex();
            assert(localResult >= 0 && static_cast<size_t>(localResult) < localOriginalWeights.size());
            assert(localOriginalWeights[localResult] > 0);
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
