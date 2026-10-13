/*
 * Problem: 1734. 解码异或后的排列 / Decode XORed Permutation
 * Link: https://leetcode.cn/problems/decode-xored-permutation/
 * Chapter: 位运算
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
    vector<int> decode(vector<int>& encoded) {
        // TODO: 在这里实现你的解法。
        (void)encoded;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> encoded = {3, 1};
        auto localResult = solution.decode(encoded);
        vector<int> expected = {1, 2, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> encoded = {6, 5, 4, 6};
        auto localResult = solution.decode(encoded);
        vector<int> expected = {2, 4, 1, 5, 3};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
