/*
 * Problem: 1622. 奇妙序列 / Fancy Sequence
 * Link: https://leetcode.cn/problems/fancy-sequence/
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

class Fancy {
public:
    Fancy() {
        // TODO: 在这里实现你的解法。
    }
    
    void append(int val) {
        // TODO: 在这里实现你的解法。
        (void)val;
    }
    
    void addAll(int inc) {
        // TODO: 在这里实现你的解法。
        (void)inc;
    }
    
    void multAll(int m) {
        // TODO: 在这里实现你的解法。
        (void)m;
    }
    
    int getIndex(int idx) {
        // TODO: 在这里实现你的解法。
        (void)idx;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        Fancy localObject;
        {
            int val = 2;
            localObject.append(val);
        }
        {
            int inc = 3;
            localObject.addAll(inc);
        }
        {
            int val = 7;
            localObject.append(val);
        }
        {
            int m = 2;
            localObject.multAll(m);
        }
        {
            int idx = 0;
            auto localResult = localObject.getIndex(idx);
            int expected = 10;
            assert((localResult == expected));
        }
        {
            int inc = 3;
            localObject.addAll(inc);
        }
        {
            int val = 10;
            localObject.append(val);
        }
        {
            int m = 2;
            localObject.multAll(m);
        }
        {
            int idx = 0;
            auto localResult = localObject.getIndex(idx);
            int expected = 26;
            assert((localResult == expected));
        }
        {
            int idx = 1;
            auto localResult = localObject.getIndex(idx);
            int expected = 34;
            assert((localResult == expected));
        }
        {
            int idx = 2;
            auto localResult = localObject.getIndex(idx);
            int expected = 20;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
