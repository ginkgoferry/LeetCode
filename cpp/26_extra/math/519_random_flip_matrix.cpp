/*
 * Problem: 519. 随机翻转矩阵 / Random Flip Matrix
 * Link: https://leetcode.cn/problems/random-flip-matrix/
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
    Solution(int m, int n) {
        // TODO: 在这里实现你的解法。
        (void)m;
        (void)n;
    }
    
    vector<int> flip() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    void reset() {
        // TODO: 在这里实现你的解法。
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int m = 3;
        int n = 1;
        set<pair<int, int>> localFlippedCells;
        // 随机接口检查结果合法性；概率分布需要另行验证。
        Solution localObject(m, n);
        {
            auto localResult = localObject.flip();
            assert(localResult.size() == 2);
            assert(localResult[0] >= 0 && localResult[0] < m && localResult[1] >= 0 && localResult[1] < n);
            assert(localFlippedCells.insert({localResult[0], localResult[1]}).second);
        }
        {
            auto localResult = localObject.flip();
            assert(localResult.size() == 2);
            assert(localResult[0] >= 0 && localResult[0] < m && localResult[1] >= 0 && localResult[1] < n);
            assert(localFlippedCells.insert({localResult[0], localResult[1]}).second);
        }
        {
            auto localResult = localObject.flip();
            assert(localResult.size() == 2);
            assert(localResult[0] >= 0 && localResult[0] < m && localResult[1] >= 0 && localResult[1] < n);
            assert(localFlippedCells.insert({localResult[0], localResult[1]}).second);
        }
        {
            localObject.reset();
            localFlippedCells.clear();
        }
        {
            auto localResult = localObject.flip();
            assert(localResult.size() == 2);
            assert(localResult[0] >= 0 && localResult[0] < m && localResult[1] >= 0 && localResult[1] < n);
            assert(localFlippedCells.insert({localResult[0], localResult[1]}).second);
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
