/*
 * Problem: 497. 非重叠矩形中的随机点 / Random Point in Non-overlapping Rectangles
 * Link: https://leetcode.cn/problems/random-point-in-non-overlapping-rectangles/
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
    Solution(vector<vector<int>>& rects) {
        // TODO: 在这里实现你的解法。
        (void)rects;
    }
    
    vector<int> pick() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        vector<vector<int>> rects = {{-2, -2, 1, 1}, {2, 2, 4, 6}};
        const auto localOriginalRectangles = rects;
        // 随机接口检查结果合法性；概率分布需要另行验证。
        Solution localObject(rects);
        {
            auto localResult = localObject.pick();
            assert(localResult.size() == 2);
            bool contained = false;
            for (const auto& rect : localOriginalRectangles)
                contained |= localResult[0] >= rect[0] && localResult[0] <= rect[2] && localResult[1] >= rect[1] && localResult[1] <= rect[3];
            assert(contained);
        }
        {
            auto localResult = localObject.pick();
            assert(localResult.size() == 2);
            bool contained = false;
            for (const auto& rect : localOriginalRectangles)
                contained |= localResult[0] >= rect[0] && localResult[0] <= rect[2] && localResult[1] >= rect[1] && localResult[1] <= rect[3];
            assert(contained);
        }
        {
            auto localResult = localObject.pick();
            assert(localResult.size() == 2);
            bool contained = false;
            for (const auto& rect : localOriginalRectangles)
                contained |= localResult[0] >= rect[0] && localResult[0] <= rect[2] && localResult[1] >= rect[1] && localResult[1] <= rect[3];
            assert(contained);
        }
        {
            auto localResult = localObject.pick();
            assert(localResult.size() == 2);
            bool contained = false;
            for (const auto& rect : localOriginalRectangles)
                contained |= localResult[0] >= rect[0] && localResult[0] <= rect[2] && localResult[1] >= rect[1] && localResult[1] <= rect[3];
            assert(contained);
        }
        {
            auto localResult = localObject.pick();
            assert(localResult.size() == 2);
            bool contained = false;
            for (const auto& rect : localOriginalRectangles)
                contained |= localResult[0] >= rect[0] && localResult[0] <= rect[2] && localResult[1] >= rect[1] && localResult[1] <= rect[3];
            assert(contained);
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
