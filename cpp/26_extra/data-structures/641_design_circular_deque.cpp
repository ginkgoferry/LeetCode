/*
 * Problem: 641. 设计循环双端队列 / Design Circular Deque
 * Link: https://leetcode.cn/problems/design-circular-deque/
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

class MyCircularDeque {
public:
    MyCircularDeque(int k) {
        // TODO: 在这里实现你的解法。
        (void)k;
    }
    
    bool insertFront(int value) {
        // TODO: 在这里实现你的解法。
        (void)value;
        return {};
    }
    
    bool insertLast(int value) {
        // TODO: 在这里实现你的解法。
        (void)value;
        return {};
    }
    
    bool deleteFront() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    bool deleteLast() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    int getFront() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    int getRear() {
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
        MyCircularDeque localObject(k);
        {
            int value = 1;
            auto localResult = localObject.insertLast(value);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int value = 2;
            auto localResult = localObject.insertLast(value);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int value = 3;
            auto localResult = localObject.insertFront(value);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int value = 4;
            auto localResult = localObject.insertFront(value);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.getRear();
            int expected = 2;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.isFull();
            bool expected = true;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.deleteLast();
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int value = 4;
            auto localResult = localObject.insertFront(value);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.getFront();
            int expected = 4;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
