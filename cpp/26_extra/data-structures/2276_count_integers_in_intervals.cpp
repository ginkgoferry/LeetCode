/*
 * Problem: 2276. 统计区间中的整数数目 / Count Integers in Intervals
 * Link: https://leetcode.cn/problems/count-integers-in-intervals/
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

class CountIntervals {
public:
    CountIntervals() {
        // TODO: 在这里实现你的解法。
    }
    
    void add(int left, int right) {
        // TODO: 在这里实现你的解法。
        (void)left;
        (void)right;
    }
    
    int count() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        CountIntervals localObject;
        {
            int left = 2;
            int right = 3;
            localObject.add(left, right);
        }
        {
            int left = 7;
            int right = 10;
            localObject.add(left, right);
        }
        {
            auto localResult = localObject.count();
            int expected = 6;
            assert((localResult == expected));
        }
        {
            int left = 5;
            int right = 8;
            localObject.add(left, right);
        }
        {
            auto localResult = localObject.count();
            int expected = 8;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
