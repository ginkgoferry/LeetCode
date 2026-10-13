/*
 * Problem: 715. Range 模块 / Range Module
 * Link: https://leetcode.cn/problems/range-module/
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

class RangeModule {
public:
    RangeModule() {
        // TODO: 在这里实现你的解法。
    }
    
    void addRange(int left, int right) {
        // TODO: 在这里实现你的解法。
        (void)left;
        (void)right;
    }
    
    bool queryRange(int left, int right) {
        // TODO: 在这里实现你的解法。
        (void)left;
        (void)right;
        return {};
    }
    
    void removeRange(int left, int right) {
        // TODO: 在这里实现你的解法。
        (void)left;
        (void)right;
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        RangeModule localObject;
        {
            int left = 10;
            int right = 20;
            localObject.addRange(left, right);
        }
        {
            int left = 14;
            int right = 16;
            localObject.removeRange(left, right);
        }
        {
            int left = 10;
            int right = 14;
            auto localResult = localObject.queryRange(left, right);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int left = 13;
            int right = 15;
            auto localResult = localObject.queryRange(left, right);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            int left = 16;
            int right = 17;
            auto localResult = localObject.queryRange(left, right);
            bool expected = true;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
