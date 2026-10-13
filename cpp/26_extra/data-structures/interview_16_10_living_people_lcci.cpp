/*
 * Problem: 面试题 16.10. 生存人数 / Living People LCCI
 * Link: https://leetcode.cn/problems/living-people-lcci/
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
    int maxAliveYear(vector<int>& birth, vector<int>& death) {
        // TODO: 在这里实现你的解法。
        (void)birth;
        (void)death;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> birth = {1900, 1901, 1950};
        vector<int> death = {1948, 1951, 2000};
        auto localResult = solution.maxAliveYear(birth, death);
        int expected = 1901;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
