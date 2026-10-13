/*
 * Problem: 933. 最近的请求次数 / Number of Recent Calls
 * Link: https://leetcode.cn/problems/number-of-recent-calls/
 * Chapter: 数据结构
 * Difficulty: Easy
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

class RecentCounter {
public:
    RecentCounter() {
        // TODO: 在这里实现你的解法。
    }
    
    int ping(int t) {
        // TODO: 在这里实现你的解法。
        (void)t;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        RecentCounter localObject;
        {
            int t = 1;
            auto localResult = localObject.ping(t);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int t = 100;
            auto localResult = localObject.ping(t);
            int expected = 2;
            assert((localResult == expected));
        }
        {
            int t = 3001;
            auto localResult = localObject.ping(t);
            int expected = 3;
            assert((localResult == expected));
        }
        {
            int t = 3002;
            auto localResult = localObject.ping(t);
            int expected = 3;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
