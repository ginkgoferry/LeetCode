/*
 * Problem: 155. 最小栈 / Min Stack
 * Link: https://leetcode.cn/problems/min-stack/
 * Chapter: 栈
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


class MinStack {
public:
    MinStack() {
        // TODO: 在这里实现你的解法。
    }

    void push(int value) {
        // TODO: 在这里实现你的解法。
        (void)value;
    }

    void pop() {
        // TODO: 在这里实现你的解法。
    }

    int top() {
        // TODO: 在这里实现你的解法。
        return {};
    }

    int getMin() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

#ifdef LOCAL
int main() {
    {
        MinStack obj;
        obj.push(-2);
        obj.push(0);
        obj.push(-3);
        assert((obj.getMin() == -3));
        obj.pop();
        assert((obj.top() == 0));
        assert((obj.getMin() == -2));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
