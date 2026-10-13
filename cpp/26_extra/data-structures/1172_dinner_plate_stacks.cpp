/*
 * Problem: 1172. 餐盘栈 / Dinner Plate Stacks
 * Link: https://leetcode.cn/problems/dinner-plate-stacks/
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

class DinnerPlates {
public:
    DinnerPlates(int capacity) {
        // TODO: 在这里实现你的解法。
        (void)capacity;
    }
    
    void push(int val) {
        // TODO: 在这里实现你的解法。
        (void)val;
    }
    
    int pop() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    int popAtStack(int index) {
        // TODO: 在这里实现你的解法。
        (void)index;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int capacity = 2;
        DinnerPlates localObject(capacity);
        {
            int val = 1;
            localObject.push(val);
        }
        {
            int val = 2;
            localObject.push(val);
        }
        {
            int val = 3;
            localObject.push(val);
        }
        {
            int val = 4;
            localObject.push(val);
        }
        {
            int val = 5;
            localObject.push(val);
        }
        {
            int index = 0;
            auto localResult = localObject.popAtStack(index);
            int expected = 2;
            assert((localResult == expected));
        }
        {
            int val = 20;
            localObject.push(val);
        }
        {
            int val = 21;
            localObject.push(val);
        }
        {
            int index = 0;
            auto localResult = localObject.popAtStack(index);
            int expected = 20;
            assert((localResult == expected));
        }
        {
            int index = 2;
            auto localResult = localObject.popAtStack(index);
            int expected = 21;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.pop();
            int expected = 5;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.pop();
            int expected = 4;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.pop();
            int expected = 3;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.pop();
            int expected = 1;
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
