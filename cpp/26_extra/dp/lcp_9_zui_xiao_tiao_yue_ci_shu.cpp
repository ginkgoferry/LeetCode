/*
 * Problem: LCP 9. 最小跳跃次数 / 最小跳跃次数
 * Link: https://leetcode.cn/problems/zui-xiao-tiao-yue-ci-shu/
 * Chapter: 图论
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
    int minJump(vector<int>& jump) {
        // TODO: 在这里实现你的解法。
        (void)jump;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> jump = {2, 5, 1, 1, 1, 1};
        auto localResult = solution.minJump(jump);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
