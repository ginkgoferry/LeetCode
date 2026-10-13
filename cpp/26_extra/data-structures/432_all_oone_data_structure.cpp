/*
 * Problem: 432. 全 O(1) 的数据结构 / All O`one Data Structure
 * Link: https://leetcode.cn/problems/all-oone-data-structure/
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

class AllOne {
public:
    AllOne() {
        // TODO: 在这里实现你的解法。
    }
    
    void inc(string key) {
        // TODO: 在这里实现你的解法。
        (void)key;
    }
    
    void dec(string key) {
        // TODO: 在这里实现你的解法。
        (void)key;
    }
    
    string getMaxKey() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    string getMinKey() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        AllOne localObject;
        {
            string key = "hello";
            localObject.inc(key);
        }
        {
            string key = "hello";
            localObject.inc(key);
        }
        {
            auto localResult = localObject.getMaxKey();
            string expected = "hello";
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.getMinKey();
            string expected = "hello";
            assert((localResult == expected));
        }
        {
            string key = "leet";
            localObject.inc(key);
        }
        {
            auto localResult = localObject.getMaxKey();
            string expected = "hello";
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.getMinKey();
            string expected = "leet";
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
