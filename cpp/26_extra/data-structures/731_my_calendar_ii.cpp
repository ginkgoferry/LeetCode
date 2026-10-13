/*
 * Problem: 731. 我的日程安排表 II / My Calendar II
 * Link: https://leetcode.cn/problems/my-calendar-ii/
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

class MyCalendarTwo {
public:
    MyCalendarTwo() {
        // TODO: 在这里实现你的解法。
    }
    
    bool book(int startTime, int endTime) {
        // TODO: 在这里实现你的解法。
        (void)startTime;
        (void)endTime;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        MyCalendarTwo localObject;
        {
            int startTime = 10;
            int endTime = 20;
            auto localResult = localObject.book(startTime, endTime);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int startTime = 50;
            int endTime = 60;
            auto localResult = localObject.book(startTime, endTime);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int startTime = 10;
            int endTime = 40;
            auto localResult = localObject.book(startTime, endTime);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int startTime = 5;
            int endTime = 15;
            auto localResult = localObject.book(startTime, endTime);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            int startTime = 5;
            int endTime = 10;
            auto localResult = localObject.book(startTime, endTime);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int startTime = 25;
            int endTime = 55;
            auto localResult = localObject.book(startTime, endTime);
            bool expected = true;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
