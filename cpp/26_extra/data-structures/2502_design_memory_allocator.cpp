/*
 * Problem: 2502. 设计内存分配器 / Design Memory Allocator
 * Link: https://leetcode.cn/problems/design-memory-allocator/
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

class Allocator {
public:
    Allocator(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
    }
    
    int allocate(int size, int mID) {
        // TODO: 在这里实现你的解法。
        (void)size;
        (void)mID;
        return {};
    }
    
    int freeMemory(int mID) {
        // TODO: 在这里实现你的解法。
        (void)mID;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int n = 10;
        Allocator localObject(n);
        {
            int size = 1;
            int mID = 1;
            auto localResult = localObject.allocate(size, mID);
            int expected = 0;
            assert((localResult == expected));
        }
        {
            int size = 1;
            int mID = 2;
            auto localResult = localObject.allocate(size, mID);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int size = 1;
            int mID = 3;
            auto localResult = localObject.allocate(size, mID);
            int expected = 2;
            assert((localResult == expected));
        }
        {
            int mID = 2;
            auto localResult = localObject.freeMemory(mID);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int size = 3;
            int mID = 4;
            auto localResult = localObject.allocate(size, mID);
            int expected = 3;
            assert((localResult == expected));
        }
        {
            int size = 1;
            int mID = 1;
            auto localResult = localObject.allocate(size, mID);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int size = 1;
            int mID = 1;
            auto localResult = localObject.allocate(size, mID);
            int expected = 6;
            assert((localResult == expected));
        }
        {
            int mID = 1;
            auto localResult = localObject.freeMemory(mID);
            int expected = 3;
            assert((localResult == expected));
        }
        {
            int size = 10;
            int mID = 2;
            auto localResult = localObject.allocate(size, mID);
            int expected = -1;
            assert((localResult == expected));
        }
        {
            int mID = 7;
            auto localResult = localObject.freeMemory(mID);
            int expected = 0;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
