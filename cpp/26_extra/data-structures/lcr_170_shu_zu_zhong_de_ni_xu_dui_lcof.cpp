/*
 * Problem: LCR 170. 交易逆序对的总数 / 交易逆序对的总数
 * Link: https://leetcode.cn/problems/shu-zu-zhong-de-ni-xu-dui-lcof/
 * Chapter: 数据结构
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
    int reversePairs(vector<int>& record) {
        // TODO: 在这里实现你的解法。
        (void)record;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> record = {9, 7, 5, 4, 6};
        auto localResult = solution.reversePairs(record);
        int expected = 8;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
