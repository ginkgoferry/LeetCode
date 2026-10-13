/*
 * Problem: 381. O(1) 时间插入、删除和获取随机元素 - 允许重复 / Insert Delete GetRandom O(1) - Duplicates allowed
 * Link: https://leetcode.cn/problems/insert-delete-getrandom-o1-duplicates-allowed/
 * Chapter: 数学
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

class RandomizedCollection {
public:
    RandomizedCollection() {
        // TODO: 在这里实现你的解法。
    }
    
    bool insert(int val) {
        // TODO: 在这里实现你的解法。
        (void)val;
        return {};
    }
    
    bool remove(int val) {
        // TODO: 在这里实现你的解法。
        (void)val;
        return {};
    }
    
    int getRandom() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        multiset<int> localAllowedValues;
        // 随机接口检查结果合法性；概率分布需要另行验证。
        RandomizedCollection localObject;
        {
            int val = 1;
            auto localResult = localObject.insert(val);
            bool expected = true;
            assert((localResult == expected));
            localAllowedValues.insert(val);
        }
        {
            int val = 1;
            auto localResult = localObject.insert(val);
            bool expected = false;
            assert((localResult == expected));
            localAllowedValues.insert(val);
        }
        {
            int val = 2;
            auto localResult = localObject.insert(val);
            bool expected = true;
            assert((localResult == expected));
            localAllowedValues.insert(val);
        }
        {
            auto localResult = localObject.getRandom();
            assert(localAllowedValues.count(localResult));
        }
        {
            int val = 1;
            auto localResult = localObject.remove(val);
            bool expected = true;
            assert((localResult == expected));
            auto found = localAllowedValues.find(val);
            if (found != localAllowedValues.end()) localAllowedValues.erase(found);
        }
        {
            auto localResult = localObject.getRandom();
            assert(localAllowedValues.count(localResult));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
