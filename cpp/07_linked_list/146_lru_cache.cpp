/*
 * Problem: 146. LRU 缓存 / LRU Cache
 * Link: https://leetcode.cn/problems/lru-cache/
 * Chapter: 链表
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


class LRUCache {
public:
    LRUCache(int capacity) {

    }

    int get(int key) {

    }

    void put(int key, int value) {

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

#ifdef LOCAL
int main() {
    {
        LRUCache obj(2);
        obj.put(1, 1);
        obj.put(2, 2);
        assert((obj.get(1) == 1));
        obj.put(3, 3);
        assert((obj.get(2) == -1));
        obj.put(4, 4);
        assert((obj.get(1) == -1));
        assert((obj.get(3) == 3));
        assert((obj.get(4) == 4));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
