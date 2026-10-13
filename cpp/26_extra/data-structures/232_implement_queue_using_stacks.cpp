/*
 * Problem: 232. 用栈实现队列 / Implement Queue using Stacks
 * Link: https://leetcode.cn/problems/implement-queue-using-stacks/
 * Chapter: 数据结构
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

class MyQueue {
public:
    MyQueue() {
        // TODO: 在这里实现你的解法。
    }
    
    void push(int x) {
        // TODO: 在这里实现你的解法。
        (void)x;
    }
    
    int pop() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    int peek() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    bool empty() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        MyQueue localObject;
        {
            int x = 1;
            localObject.push(x);
        }
        {
            int x = 2;
            localObject.push(x);
        }
        {
            auto localResult = localObject.peek();
            int expected = 1;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.pop();
            int expected = 1;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.empty();
            bool expected = false;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
