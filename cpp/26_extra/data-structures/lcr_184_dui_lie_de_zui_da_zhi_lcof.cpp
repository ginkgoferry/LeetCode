/*
 * Problem: LCR 184. 设计自助结算系统 / 设计自助结算系统
 * Link: https://leetcode.cn/problems/dui-lie-de-zui-da-zhi-lcof/
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

class Checkout {
public:
    Checkout() {
        // TODO: 在这里实现你的解法。
    }
    
    int get_max() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    void add(int value) {
        // TODO: 在这里实现你的解法。
        (void)value;
    }
    
    int remove() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        Checkout localObject;
        {
            int value = 4;
            localObject.add(value);
        }
        {
            int value = 7;
            localObject.add(value);
        }
        {
            auto localResult = localObject.get_max();
            int expected = 7;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.remove();
            int expected = 4;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.get_max();
            int expected = 7;
            assert((localResult == expected));
        }
    }

    {
        // 官方操作序列
        Checkout localObject;
        {
            auto localResult = localObject.remove();
            int expected = -1;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.get_max();
            int expected = -1;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
