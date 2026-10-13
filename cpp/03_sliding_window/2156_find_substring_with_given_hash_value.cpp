/*
 * Problem: 2156. 查找给定哈希值的子串 / Find Substring With Given Hash Value
 * Link: https://leetcode.cn/problems/find-substring-with-given-hash-value/
 * Chapter: 滑动窗口
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
    string subStrHash(string s, int power, int modulo, int k, int hashValue) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)power;
        (void)modulo;
        (void)k;
        (void)hashValue;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "leetcode";
        int power = 7;
        int modulo = 20;
        int k = 2;
        int hashValue = 0;
        auto localResult = solution.subStrHash(s, power, modulo, k, hashValue);
        string expected = "ee";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "fbxzaad";
        int power = 31;
        int modulo = 100;
        int k = 3;
        int hashValue = 32;
        auto localResult = solution.subStrHash(s, power, modulo, k, hashValue);
        string expected = "fbx";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
