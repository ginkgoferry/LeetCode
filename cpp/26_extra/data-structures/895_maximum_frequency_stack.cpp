/*
 * Problem: 895. 最大频率栈 / Maximum Frequency Stack
 * Link: https://leetcode.cn/problems/maximum-frequency-stack/
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

class FreqStack {
public:
    FreqStack() {
        // TODO: 在这里实现你的解法。
    }
    
    void push(int val) {
        // TODO: 在这里实现你的解法。
        (void)val;
    }
    
    int pop() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        FreqStack localObject;
        {
            int val = 5;
            localObject.push(val);
        }
        {
            int val = 7;
            localObject.push(val);
        }
        {
            int val = 5;
            localObject.push(val);
        }
        {
            int val = 7;
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
            auto localResult = localObject.pop();
            int expected = 5;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.pop();
            int expected = 7;
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
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
