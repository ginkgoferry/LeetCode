/*
 * Problem: 2349. 设计数字容器系统 / Design a Number Container System
 * Link: https://leetcode.cn/problems/design-a-number-container-system/
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

class NumberContainers {
public:
    NumberContainers() {
        // TODO: 在这里实现你的解法。
    }
    
    void change(int index, int number) {
        // TODO: 在这里实现你的解法。
        (void)index;
        (void)number;
    }
    
    int find(int number) {
        // TODO: 在这里实现你的解法。
        (void)number;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        NumberContainers localObject;
        {
            int number = 10;
            auto localResult = localObject.find(number);
            int expected = -1;
            assert((localResult == expected));
        }
        {
            int index = 2;
            int number = 10;
            localObject.change(index, number);
        }
        {
            int index = 1;
            int number = 10;
            localObject.change(index, number);
        }
        {
            int index = 3;
            int number = 10;
            localObject.change(index, number);
        }
        {
            int index = 5;
            int number = 10;
            localObject.change(index, number);
        }
        {
            int number = 10;
            auto localResult = localObject.find(number);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int index = 1;
            int number = 20;
            localObject.change(index, number);
        }
        {
            int number = 10;
            auto localResult = localObject.find(number);
            int expected = 2;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
