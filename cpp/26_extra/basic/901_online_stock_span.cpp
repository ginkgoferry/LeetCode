/*
 * Problem: 901. 股票价格跨度 / Online Stock Span
 * Link: https://leetcode.cn/problems/online-stock-span/
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

class StockSpanner {
public:
    StockSpanner() {
        // TODO: 在这里实现你的解法。
    }
    
    int next(int price) {
        // TODO: 在这里实现你的解法。
        (void)price;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        StockSpanner localObject;
        {
            int price = 100;
            auto localResult = localObject.next(price);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int price = 80;
            auto localResult = localObject.next(price);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int price = 60;
            auto localResult = localObject.next(price);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int price = 70;
            auto localResult = localObject.next(price);
            int expected = 2;
            assert((localResult == expected));
        }
        {
            int price = 60;
            auto localResult = localObject.next(price);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int price = 75;
            auto localResult = localObject.next(price);
            int expected = 4;
            assert((localResult == expected));
        }
        {
            int price = 85;
            auto localResult = localObject.next(price);
            int expected = 6;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
