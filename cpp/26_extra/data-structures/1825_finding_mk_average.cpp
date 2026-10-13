/*
 * Problem: 1825. 求出 MK 平均值 / Finding MK Average
 * Link: https://leetcode.cn/problems/finding-mk-average/
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

class MKAverage {
public:
    MKAverage(int m, int k) {
        // TODO: 在这里实现你的解法。
        (void)m;
        (void)k;
    }
    
    void addElement(int num) {
        // TODO: 在这里实现你的解法。
        (void)num;
    }
    
    int calculateMKAverage() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int m = 3;
        int k = 1;
        MKAverage localObject(m, k);
        {
            int num = 3;
            localObject.addElement(num);
        }
        {
            int num = 1;
            localObject.addElement(num);
        }
        {
            auto localResult = localObject.calculateMKAverage();
            int expected = -1;
            assert((localResult == expected));
        }
        {
            int num = 10;
            localObject.addElement(num);
        }
        {
            auto localResult = localObject.calculateMKAverage();
            int expected = 3;
            assert((localResult == expected));
        }
        {
            int num = 5;
            localObject.addElement(num);
        }
        {
            int num = 5;
            localObject.addElement(num);
        }
        {
            int num = 5;
            localObject.addElement(num);
        }
        {
            auto localResult = localObject.calculateMKAverage();
            int expected = 5;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
