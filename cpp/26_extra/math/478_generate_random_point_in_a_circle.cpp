/*
 * Problem: 478. 在圆内随机生成点 / Generate Random Point in a Circle
 * Link: https://leetcode.cn/problems/generate-random-point-in-a-circle/
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
    Solution(double radius, double x_center, double y_center) {
        // TODO: 在这里实现你的解法。
        (void)radius;
        (void)x_center;
        (void)y_center;
    }
    
    vector<double> randPoint() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        double radius = 1.0;
        double x_center = 0.0;
        double y_center = 0.0;
        // 随机接口检查结果合法性；概率分布需要另行验证。
        Solution localObject(radius, x_center, y_center);
        {
            auto localResult = localObject.randPoint();
            assert(localResult.size() == 2);
            double dx = localResult[0] - x_center, dy = localResult[1] - y_center;
            assert(isfinite(dx) && isfinite(dy));
            assert(dx * dx + dy * dy <= radius * radius * (1 + 1e-10));
        }
        {
            auto localResult = localObject.randPoint();
            assert(localResult.size() == 2);
            double dx = localResult[0] - x_center, dy = localResult[1] - y_center;
            assert(isfinite(dx) && isfinite(dy));
            assert(dx * dx + dy * dy <= radius * radius * (1 + 1e-10));
        }
        {
            auto localResult = localObject.randPoint();
            assert(localResult.size() == 2);
            double dx = localResult[0] - x_center, dy = localResult[1] - y_center;
            assert(isfinite(dx) && isfinite(dy));
            assert(dx * dx + dy * dy <= radius * radius * (1 + 1e-10));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
