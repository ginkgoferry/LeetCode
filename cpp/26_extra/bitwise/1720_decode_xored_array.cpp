/*
 * Problem: 1720. 解码异或后的数组 / Decode XORed Array
 * Link: https://leetcode.cn/problems/decode-xored-array/
 * Chapter: 位运算
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
    vector<int> decode(vector<int>& encoded, int first) {
        // TODO: 在这里实现你的解法。
        (void)encoded;
        (void)first;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> encoded = {1, 2, 3};
        int first = 1;
        auto localResult = solution.decode(encoded, first);
        vector<int> expected = {1, 0, 2, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> encoded = {6, 2, 7, 3};
        int first = 4;
        auto localResult = solution.decode(encoded, first);
        vector<int> expected = {4, 2, 0, 7, 4};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
