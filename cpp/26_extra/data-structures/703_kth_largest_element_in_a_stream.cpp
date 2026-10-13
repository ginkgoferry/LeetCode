/*
 * Problem: 703. 数据流中的第 K 大元素 / Kth Largest Element in a Stream
 * Link: https://leetcode.cn/problems/kth-largest-element-in-a-stream/
 * Chapter: 数据结构
 * Difficulty: Easy
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

class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)k;
        (void)nums;
    }
    
    int add(int val) {
        // TODO: 在这里实现你的解法。
        (void)val;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int k = 3;
        vector<int> nums = {4, 5, 8, 2};
        KthLargest localObject(k, nums);
        {
            int val = 3;
            auto localResult = localObject.add(val);
            int expected = 4;
            assert((localResult == expected));
        }
        {
            int val = 5;
            auto localResult = localObject.add(val);
            int expected = 5;
            assert((localResult == expected));
        }
        {
            int val = 10;
            auto localResult = localObject.add(val);
            int expected = 5;
            assert((localResult == expected));
        }
        {
            int val = 9;
            auto localResult = localObject.add(val);
            int expected = 8;
            assert((localResult == expected));
        }
        {
            int val = 4;
            auto localResult = localObject.add(val);
            int expected = 8;
            assert((localResult == expected));
        }
    }

    {
        // 官方操作序列
        int k = 4;
        vector<int> nums = {7, 7, 7, 7, 8, 3};
        KthLargest localObject(k, nums);
        {
            int val = 2;
            auto localResult = localObject.add(val);
            int expected = 7;
            assert((localResult == expected));
        }
        {
            int val = 10;
            auto localResult = localObject.add(val);
            int expected = 7;
            assert((localResult == expected));
        }
        {
            int val = 9;
            auto localResult = localObject.add(val);
            int expected = 7;
            assert((localResult == expected));
        }
        {
            int val = 9;
            auto localResult = localObject.add(val);
            int expected = 8;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
