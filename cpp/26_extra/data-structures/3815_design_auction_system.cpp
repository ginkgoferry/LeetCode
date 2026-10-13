/*
 * Problem: 3815. 设计拍卖系统 / Design Auction System
 * Link: https://leetcode.cn/problems/design-auction-system/
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

class AuctionSystem {
public:
    AuctionSystem() {
        // TODO: 在这里实现你的解法。
    }
    
    void addBid(int userId, int itemId, int bidAmount) {
        // TODO: 在这里实现你的解法。
        (void)userId;
        (void)itemId;
        (void)bidAmount;
    }
    
    void updateBid(int userId, int itemId, int newAmount) {
        // TODO: 在这里实现你的解法。
        (void)userId;
        (void)itemId;
        (void)newAmount;
    }
    
    void removeBid(int userId, int itemId) {
        // TODO: 在这里实现你的解法。
        (void)userId;
        (void)itemId;
    }
    
    int getHighestBidder(int itemId) {
        // TODO: 在这里实现你的解法。
        (void)itemId;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        AuctionSystem localObject;
        {
            int userId = 1;
            int itemId = 7;
            int bidAmount = 5;
            localObject.addBid(userId, itemId, bidAmount);
        }
        {
            int userId = 2;
            int itemId = 7;
            int bidAmount = 6;
            localObject.addBid(userId, itemId, bidAmount);
        }
        {
            int itemId = 7;
            auto localResult = localObject.getHighestBidder(itemId);
            int expected = 2;
            assert((localResult == expected));
        }
        {
            int userId = 1;
            int itemId = 7;
            int newAmount = 8;
            localObject.updateBid(userId, itemId, newAmount);
        }
        {
            int itemId = 7;
            auto localResult = localObject.getHighestBidder(itemId);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int userId = 2;
            int itemId = 7;
            localObject.removeBid(userId, itemId);
        }
        {
            int itemId = 7;
            auto localResult = localObject.getHighestBidder(itemId);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int itemId = 3;
            auto localResult = localObject.getHighestBidder(itemId);
            int expected = -1;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
