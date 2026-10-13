/*
 * Problem: 1652. 拆炸弹 / Defuse the Bomb
 * Link: https://leetcode.cn/problems/defuse-the-bomb/
 * Chapter: 滑动窗口
 * Difficulty: Easy
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
    vector<int> decrypt(vector<int>& code, int k) {
        // TODO: 在这里实现你的解法。
        (void)code;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> code = {5, 7, 1, 4};
        int k = 3;
        auto localResult = solution.decrypt(code, k);
        vector<int> expected = {12, 10, 16, 13};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> code = {1, 2, 3, 4};
        int k = 0;
        auto localResult = solution.decrypt(code, k);
        vector<int> expected = {0, 0, 0, 0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> code = {2, 4, 9, 3};
        int k = -2;
        auto localResult = solution.decrypt(code, k);
        vector<int> expected = {12, 5, 6, 13};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
