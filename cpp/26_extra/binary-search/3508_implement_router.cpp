/*
 * Problem: 3508. 设计路由器 / Implement Router
 * Link: https://leetcode.cn/problems/implement-router/
 * Chapter: 二分查找
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

class Router {
public:
    Router(int memoryLimit) {
        // TODO: 在这里实现你的解法。
        (void)memoryLimit;
    }
    
    bool addPacket(int source, int destination, int timestamp) {
        // TODO: 在这里实现你的解法。
        (void)source;
        (void)destination;
        (void)timestamp;
        return {};
    }
    
    vector<int> forwardPacket() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    int getCount(int destination, int startTime, int endTime) {
        // TODO: 在这里实现你的解法。
        (void)destination;
        (void)startTime;
        (void)endTime;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int memoryLimit = 3;
        Router localObject(memoryLimit);
        {
            int source = 1;
            int destination = 4;
            int timestamp = 90;
            auto localResult = localObject.addPacket(source, destination, timestamp);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int source = 2;
            int destination = 5;
            int timestamp = 90;
            auto localResult = localObject.addPacket(source, destination, timestamp);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int source = 1;
            int destination = 4;
            int timestamp = 90;
            auto localResult = localObject.addPacket(source, destination, timestamp);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            int source = 3;
            int destination = 5;
            int timestamp = 95;
            auto localResult = localObject.addPacket(source, destination, timestamp);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int source = 4;
            int destination = 5;
            int timestamp = 105;
            auto localResult = localObject.addPacket(source, destination, timestamp);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.forwardPacket();
            vector<int> expected = {2, 5, 90};
            assert((localResult == expected));
        }
        {
            int source = 5;
            int destination = 2;
            int timestamp = 110;
            auto localResult = localObject.addPacket(source, destination, timestamp);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int destination = 5;
            int startTime = 100;
            int endTime = 110;
            auto localResult = localObject.getCount(destination, startTime, endTime);
            int expected = 1;
            assert((localResult == expected));
        }
    }

    {
        // 官方操作序列
        int memoryLimit = 2;
        Router localObject(memoryLimit);
        {
            int source = 7;
            int destination = 4;
            int timestamp = 90;
            auto localResult = localObject.addPacket(source, destination, timestamp);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.forwardPacket();
            vector<int> expected = {7, 4, 90};
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.forwardPacket();
            vector<int> expected = {};
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
