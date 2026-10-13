/*
 * Problem: 710. 黑名单中的随机数 / Random Pick with Blacklist
 * Link: https://leetcode.cn/problems/random-pick-with-blacklist/
 * Chapter: 数学
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
    Solution(int n, vector<int>& blacklist) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)blacklist;
    }
    
    int pick() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int n = 7;
        vector<int> blacklist = {2, 3, 5};
        const auto localOriginalBlacklist = blacklist;
        // 随机接口检查结果合法性；概率分布需要另行验证。
        Solution localObject(n, blacklist);
        {
            auto localResult = localObject.pick();
            assert(localResult >= 0 && localResult < n);
            assert(find(localOriginalBlacklist.begin(), localOriginalBlacklist.end(), localResult) == localOriginalBlacklist.end());
        }
        {
            auto localResult = localObject.pick();
            assert(localResult >= 0 && localResult < n);
            assert(find(localOriginalBlacklist.begin(), localOriginalBlacklist.end(), localResult) == localOriginalBlacklist.end());
        }
        {
            auto localResult = localObject.pick();
            assert(localResult >= 0 && localResult < n);
            assert(find(localOriginalBlacklist.begin(), localOriginalBlacklist.end(), localResult) == localOriginalBlacklist.end());
        }
        {
            auto localResult = localObject.pick();
            assert(localResult >= 0 && localResult < n);
            assert(find(localOriginalBlacklist.begin(), localOriginalBlacklist.end(), localResult) == localOriginalBlacklist.end());
        }
        {
            auto localResult = localObject.pick();
            assert(localResult >= 0 && localResult < n);
            assert(find(localOriginalBlacklist.begin(), localOriginalBlacklist.end(), localResult) == localOriginalBlacklist.end());
        }
        {
            auto localResult = localObject.pick();
            assert(localResult >= 0 && localResult < n);
            assert(find(localOriginalBlacklist.begin(), localOriginalBlacklist.end(), localResult) == localOriginalBlacklist.end());
        }
        {
            auto localResult = localObject.pick();
            assert(localResult >= 0 && localResult < n);
            assert(find(localOriginalBlacklist.begin(), localOriginalBlacklist.end(), localResult) == localOriginalBlacklist.end());
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
