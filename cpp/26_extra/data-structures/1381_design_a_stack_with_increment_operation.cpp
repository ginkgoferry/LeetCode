/*
 * Problem: 1381. 设计一个支持增量操作的栈 / Design a Stack With Increment Operation
 * Link: https://leetcode.cn/problems/design-a-stack-with-increment-operation/
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

class CustomStack {
public:
    CustomStack(int maxSize) {
        // TODO: 在这里实现你的解法。
        (void)maxSize;
    }
    
    void push(int x) {
        // TODO: 在这里实现你的解法。
        (void)x;
    }
    
    int pop() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    void increment(int k, int val) {
        // TODO: 在这里实现你的解法。
        (void)k;
        (void)val;
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int maxSize = 3;
        CustomStack localObject(maxSize);
        {
            int x = 1;
            localObject.push(x);
        }
        {
            int x = 2;
            localObject.push(x);
        }
        {
            auto localResult = localObject.pop();
            int expected = 2;
            assert((localResult == expected));
        }
        {
            int x = 2;
            localObject.push(x);
        }
        {
            int x = 3;
            localObject.push(x);
        }
        {
            int x = 4;
            localObject.push(x);
        }
        {
            int k = 5;
            int val = 100;
            localObject.increment(k, val);
        }
        {
            int k = 2;
            int val = 100;
            localObject.increment(k, val);
        }
        {
            auto localResult = localObject.pop();
            int expected = 103;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.pop();
            int expected = 202;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.pop();
            int expected = 201;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.pop();
            int expected = -1;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
