/*
 * Problem: 3829. 设计共享出行系统 / Design Ride Sharing System
 * Link: https://leetcode.cn/problems/design-ride-sharing-system/
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

class RideSharingSystem {
public:
    RideSharingSystem() {
        // TODO: 在这里实现你的解法。
    }
    
    void addRider(int riderId) {
        // TODO: 在这里实现你的解法。
        (void)riderId;
    }
    
    void addDriver(int driverId) {
        // TODO: 在这里实现你的解法。
        (void)driverId;
    }
    
    vector<int> matchDriverWithRider() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    void cancelRider(int riderId) {
        // TODO: 在这里实现你的解法。
        (void)riderId;
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        RideSharingSystem localObject;
        {
            int riderId = 3;
            localObject.addRider(riderId);
        }
        {
            int driverId = 2;
            localObject.addDriver(driverId);
        }
        {
            int riderId = 1;
            localObject.addRider(riderId);
        }
        {
            auto localResult = localObject.matchDriverWithRider();
            vector<int> expected = {2, 3};
            assert((localResult == expected));
        }
        {
            int driverId = 5;
            localObject.addDriver(driverId);
        }
        {
            int riderId = 3;
            localObject.cancelRider(riderId);
        }
        {
            auto localResult = localObject.matchDriverWithRider();
            vector<int> expected = {5, 1};
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.matchDriverWithRider();
            vector<int> expected = {-1, -1};
            assert((localResult == expected));
        }
    }

    {
        // 官方操作序列
        RideSharingSystem localObject;
        {
            int riderId = 8;
            localObject.addRider(riderId);
        }
        {
            int driverId = 8;
            localObject.addDriver(driverId);
        }
        {
            int driverId = 6;
            localObject.addDriver(driverId);
        }
        {
            auto localResult = localObject.matchDriverWithRider();
            vector<int> expected = {8, 8};
            assert((localResult == expected));
        }
        {
            int riderId = 2;
            localObject.addRider(riderId);
        }
        {
            int riderId = 2;
            localObject.cancelRider(riderId);
        }
        {
            auto localResult = localObject.matchDriverWithRider();
            vector<int> expected = {-1, -1};
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
