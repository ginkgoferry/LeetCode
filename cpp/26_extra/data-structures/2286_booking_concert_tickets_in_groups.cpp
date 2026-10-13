/*
 * Problem: 2286. 以组为单位订音乐会的门票 / Booking Concert Tickets in Groups
 * Link: https://leetcode.cn/problems/booking-concert-tickets-in-groups/
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

class BookMyShow {
public:
    BookMyShow(int n, int m) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)m;
    }
    
    vector<int> gather(int k, int maxRow) {
        // TODO: 在这里实现你的解法。
        (void)k;
        (void)maxRow;
        return {};
    }
    
    bool scatter(int k, int maxRow) {
        // TODO: 在这里实现你的解法。
        (void)k;
        (void)maxRow;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int n = 2;
        int m = 5;
        BookMyShow localObject(n, m);
        {
            int k = 4;
            int maxRow = 0;
            auto localResult = localObject.gather(k, maxRow);
            vector<int> expected = {0, 0};
            assert((localResult == expected));
        }
        {
            int k = 2;
            int maxRow = 0;
            auto localResult = localObject.gather(k, maxRow);
            vector<int> expected = {};
            assert((localResult == expected));
        }
        {
            int k = 5;
            int maxRow = 1;
            auto localResult = localObject.scatter(k, maxRow);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int k = 5;
            int maxRow = 1;
            auto localResult = localObject.scatter(k, maxRow);
            bool expected = false;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
