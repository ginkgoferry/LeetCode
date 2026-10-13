/*
 * Problem: 707. 设计链表 / Design Linked List
 * Link: https://leetcode.cn/problems/design-linked-list/
 * Chapter: 树与回溯
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

class MyLinkedList {
public:
    MyLinkedList() {
        // TODO: 在这里实现你的解法。
    }
    
    int get(int index) {
        // TODO: 在这里实现你的解法。
        (void)index;
        return {};
    }
    
    void addAtHead(int val) {
        // TODO: 在这里实现你的解法。
        (void)val;
    }
    
    void addAtTail(int val) {
        // TODO: 在这里实现你的解法。
        (void)val;
    }
    
    void addAtIndex(int index, int val) {
        // TODO: 在这里实现你的解法。
        (void)index;
        (void)val;
    }
    
    void deleteAtIndex(int index) {
        // TODO: 在这里实现你的解法。
        (void)index;
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        MyLinkedList localObject;
        {
            int val = 1;
            localObject.addAtHead(val);
        }
        {
            int val = 3;
            localObject.addAtTail(val);
        }
        {
            int index = 1;
            int val = 2;
            localObject.addAtIndex(index, val);
        }
        {
            int index = 1;
            auto localResult = localObject.get(index);
            int expected = 2;
            assert((localResult == expected));
        }
        {
            int index = 1;
            localObject.deleteAtIndex(index);
        }
        {
            int index = 1;
            auto localResult = localObject.get(index);
            int expected = 3;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
