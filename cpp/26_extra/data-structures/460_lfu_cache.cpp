/*
 * Problem: 460. LFU 缓存 / LFU Cache
 * Link: https://leetcode.cn/problems/lfu-cache/
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

class LFUCache {
public:
    LFUCache(int capacity) {
        // TODO: 在这里实现你的解法。
        (void)capacity;
    }
    
    int get(int key) {
        // TODO: 在这里实现你的解法。
        (void)key;
        return {};
    }
    
    void put(int key, int value) {
        // TODO: 在这里实现你的解法。
        (void)key;
        (void)value;
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int capacity = 2;
        LFUCache localObject(capacity);
        {
            int key = 1;
            int value = 1;
            localObject.put(key, value);
        }
        {
            int key = 2;
            int value = 2;
            localObject.put(key, value);
        }
        {
            int key = 1;
            auto localResult = localObject.get(key);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int key = 3;
            int value = 3;
            localObject.put(key, value);
        }
        {
            int key = 2;
            auto localResult = localObject.get(key);
            int expected = -1;
            assert((localResult == expected));
        }
        {
            int key = 3;
            auto localResult = localObject.get(key);
            int expected = 3;
            assert((localResult == expected));
        }
        {
            int key = 4;
            int value = 4;
            localObject.put(key, value);
        }
        {
            int key = 1;
            auto localResult = localObject.get(key);
            int expected = -1;
            assert((localResult == expected));
        }
        {
            int key = 3;
            auto localResult = localObject.get(key);
            int expected = 3;
            assert((localResult == expected));
        }
        {
            int key = 4;
            auto localResult = localObject.get(key);
            int expected = 4;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
