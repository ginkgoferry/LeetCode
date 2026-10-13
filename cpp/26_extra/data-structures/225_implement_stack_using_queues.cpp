/*
 * Problem: 225. 用队列实现栈 / Implement Stack using Queues
 * Link: https://leetcode.cn/problems/implement-stack-using-queues/
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

class MyStack {
public:
    MyStack() {
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
    
    int top() {
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
        MyStack localObject;
        {
            int x = 1;
            localObject.push(x);
        }
        {
            int x = 2;
            localObject.push(x);
        }
        {
            auto localResult = localObject.top();
            int expected = 2;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.pop();
            int expected = 2;
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
