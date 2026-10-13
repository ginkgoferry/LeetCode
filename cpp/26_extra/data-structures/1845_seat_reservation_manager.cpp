/*
 * Problem: 1845. 座位预约管理系统 / Seat Reservation Manager
 * Link: https://leetcode.cn/problems/seat-reservation-manager/
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

class SeatManager {
public:
    SeatManager(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
    }
    
    int reserve() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    void unreserve(int seatNumber) {
        // TODO: 在这里实现你的解法。
        (void)seatNumber;
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int n = 5;
        SeatManager localObject(n);
        {
            auto localResult = localObject.reserve();
            int expected = 1;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.reserve();
            int expected = 2;
            assert((localResult == expected));
        }
        {
            int seatNumber = 2;
            localObject.unreserve(seatNumber);
        }
        {
            auto localResult = localObject.reserve();
            int expected = 2;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.reserve();
            int expected = 3;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.reserve();
            int expected = 4;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.reserve();
            int expected = 5;
            assert((localResult == expected));
        }
        {
            int seatNumber = 5;
            localObject.unreserve(seatNumber);
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
