/*
 * Problem: 622. 设计循环队列 / Design Circular Queue
 * Link: https://leetcode.cn/problems/design-circular-queue/
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

class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        // TODO: 在这里实现你的解法。
        (void)k;
    }
    
    bool enQueue(int value) {
        // TODO: 在这里实现你的解法。
        (void)value;
        return {};
    }
    
    bool deQueue() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    int Front() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    int Rear() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    bool isEmpty() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    bool isFull() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int k = 3;
        MyCircularQueue localObject(k);
        {
            int value = 1;
            auto localResult = localObject.enQueue(value);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int value = 2;
            auto localResult = localObject.enQueue(value);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int value = 3;
            auto localResult = localObject.enQueue(value);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int value = 4;
            auto localResult = localObject.enQueue(value);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.Rear();
            int expected = 3;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.isFull();
            bool expected = true;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.deQueue();
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int value = 4;
            auto localResult = localObject.enQueue(value);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.Rear();
            int expected = 4;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
