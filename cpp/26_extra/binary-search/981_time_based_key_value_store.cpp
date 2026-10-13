/*
 * Problem: 981. 基于时间的键值存储 / Time Based Key-Value Store
 * Link: https://leetcode.cn/problems/time-based-key-value-store/
 * Chapter: 二分查找
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

class TimeMap {
public:
    TimeMap() {
        // TODO: 在这里实现你的解法。
    }
    
    void set(string key, string value, int timestamp) {
        // TODO: 在这里实现你的解法。
        (void)key;
        (void)value;
        (void)timestamp;
    }
    
    string get(string key, int timestamp) {
        // TODO: 在这里实现你的解法。
        (void)key;
        (void)timestamp;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        TimeMap localObject;
        {
            string key = "foo";
            string value = "bar";
            int timestamp = 1;
            localObject.set(key, value, timestamp);
        }
        {
            string key = "foo";
            int timestamp = 1;
            auto localResult = localObject.get(key, timestamp);
            string expected = "bar";
            assert((localResult == expected));
        }
        {
            string key = "foo";
            int timestamp = 3;
            auto localResult = localObject.get(key, timestamp);
            string expected = "bar";
            assert((localResult == expected));
        }
        {
            string key = "foo";
            string value = "bar2";
            int timestamp = 4;
            localObject.set(key, value, timestamp);
        }
        {
            string key = "foo";
            int timestamp = 4;
            auto localResult = localObject.get(key, timestamp);
            string expected = "bar2";
            assert((localResult == expected));
        }
        {
            string key = "foo";
            int timestamp = 5;
            auto localResult = localObject.get(key, timestamp);
            string expected = "bar2";
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
