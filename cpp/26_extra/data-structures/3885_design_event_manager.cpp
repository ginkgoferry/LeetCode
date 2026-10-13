/*
 * Problem: 3885. 设计事件管理器 / Design Event Manager
 * Link: https://leetcode.cn/problems/design-event-manager/
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

class EventManager {
public:
    EventManager(vector<vector<int>>& events) {
        // TODO: 在这里实现你的解法。
        (void)events;
    }
    
    void updatePriority(int eventId, int newPriority) {
        // TODO: 在这里实现你的解法。
        (void)eventId;
        (void)newPriority;
    }
    
    int pollHighest() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        vector<vector<int>> events = {{5, 7}, {2, 7}, {9, 4}};
        EventManager localObject(events);
        {
            auto localResult = localObject.pollHighest();
            int expected = 2;
            assert((localResult == expected));
        }
        {
            int eventId = 9;
            int newPriority = 7;
            localObject.updatePriority(eventId, newPriority);
        }
        {
            auto localResult = localObject.pollHighest();
            int expected = 5;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.pollHighest();
            int expected = 9;
            assert((localResult == expected));
        }
    }

    {
        // 官方操作序列
        vector<vector<int>> events = {{4, 1}, {7, 2}};
        EventManager localObject(events);
        {
            auto localResult = localObject.pollHighest();
            int expected = 7;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.pollHighest();
            int expected = 4;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.pollHighest();
            int expected = -1;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
