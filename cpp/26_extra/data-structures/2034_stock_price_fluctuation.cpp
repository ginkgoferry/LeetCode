/*
 * Problem: 2034. 股票价格波动 / Stock Price Fluctuation
 * Link: https://leetcode.cn/problems/stock-price-fluctuation/
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

class StockPrice {
public:
    StockPrice() {
        // TODO: 在这里实现你的解法。
    }
    
    void update(int timestamp, int price) {
        // TODO: 在这里实现你的解法。
        (void)timestamp;
        (void)price;
    }
    
    int current() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    int maximum() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    int minimum() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        StockPrice localObject;
        {
            int timestamp = 1;
            int price = 10;
            localObject.update(timestamp, price);
        }
        {
            int timestamp = 2;
            int price = 5;
            localObject.update(timestamp, price);
        }
        {
            auto localResult = localObject.current();
            int expected = 5;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.maximum();
            int expected = 10;
            assert((localResult == expected));
        }
        {
            int timestamp = 1;
            int price = 3;
            localObject.update(timestamp, price);
        }
        {
            auto localResult = localObject.maximum();
            int expected = 5;
            assert((localResult == expected));
        }
        {
            int timestamp = 4;
            int price = 2;
            localObject.update(timestamp, price);
        }
        {
            auto localResult = localObject.minimum();
            int expected = 2;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
