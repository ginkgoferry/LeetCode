/*
 * Problem: 2336. 无限集中的最小数字 / Smallest Number in Infinite Set
 * Link: https://leetcode.cn/problems/smallest-number-in-infinite-set/
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

class SmallestInfiniteSet {
public:
    SmallestInfiniteSet() {
        // TODO: 在这里实现你的解法。
    }
    
    int popSmallest() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    void addBack(int num) {
        // TODO: 在这里实现你的解法。
        (void)num;
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        SmallestInfiniteSet localObject;
        {
            int num = 2;
            localObject.addBack(num);
        }
        {
            auto localResult = localObject.popSmallest();
            int expected = 1;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.popSmallest();
            int expected = 2;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.popSmallest();
            int expected = 3;
            assert((localResult == expected));
        }
        {
            int num = 1;
            localObject.addBack(num);
        }
        {
            auto localResult = localObject.popSmallest();
            int expected = 1;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.popSmallest();
            int expected = 4;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.popSmallest();
            int expected = 5;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
