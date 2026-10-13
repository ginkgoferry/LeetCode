/*
 * Problem: 1670. 设计前中后队列 / Design Front Middle Back Queue
 * Link: https://leetcode.cn/problems/design-front-middle-back-queue/
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

class FrontMiddleBackQueue {
public:
    FrontMiddleBackQueue() {
        // TODO: 在这里实现你的解法。
    }
    
    void pushFront(int val) {
        // TODO: 在这里实现你的解法。
        (void)val;
    }
    
    void pushMiddle(int val) {
        // TODO: 在这里实现你的解法。
        (void)val;
    }
    
    void pushBack(int val) {
        // TODO: 在这里实现你的解法。
        (void)val;
    }
    
    int popFront() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    int popMiddle() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    int popBack() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        FrontMiddleBackQueue localObject;
        {
            int val = 1;
            localObject.pushFront(val);
        }
        {
            int val = 2;
            localObject.pushBack(val);
        }
        {
            int val = 3;
            localObject.pushMiddle(val);
        }
        {
            int val = 4;
            localObject.pushMiddle(val);
        }
        {
            auto localResult = localObject.popFront();
            int expected = 1;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.popMiddle();
            int expected = 3;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.popMiddle();
            int expected = 4;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.popBack();
            int expected = 2;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.popFront();
            int expected = -1;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
