/*
 * Problem: 677. 键值映射 / Map Sum Pairs
 * Link: https://leetcode.cn/problems/map-sum-pairs/
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

class MapSum {
public:
    MapSum() {
        // TODO: 在这里实现你的解法。
    }
    
    void insert(string key, int val) {
        // TODO: 在这里实现你的解法。
        (void)key;
        (void)val;
    }
    
    int sum(string prefix) {
        // TODO: 在这里实现你的解法。
        (void)prefix;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        MapSum localObject;
        {
            string key = "apple";
            int val = 3;
            localObject.insert(key, val);
        }
        {
            string prefix = "ap";
            auto localResult = localObject.sum(prefix);
            int expected = 3;
            assert((localResult == expected));
        }
        {
            string key = "app";
            int val = 2;
            localObject.insert(key, val);
        }
        {
            string prefix = "ap";
            auto localResult = localObject.sum(prefix);
            int expected = 5;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
