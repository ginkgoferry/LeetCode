/*
 * Problem: 1157. 子数组中占绝大多数的元素 / Online Majority Element In Subarray
 * Link: https://leetcode.cn/problems/online-majority-element-in-subarray/
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

class MajorityChecker {
public:
    MajorityChecker(vector<int>& arr) {
        // TODO: 在这里实现你的解法。
        (void)arr;
    }
    
    int query(int left, int right, int threshold) {
        // TODO: 在这里实现你的解法。
        (void)left;
        (void)right;
        (void)threshold;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        vector<int> arr = {1, 1, 2, 2, 1, 1};
        MajorityChecker localObject(arr);
        {
            int left = 0;
            int right = 5;
            int threshold = 4;
            auto localResult = localObject.query(left, right, threshold);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int left = 0;
            int right = 3;
            int threshold = 3;
            auto localResult = localObject.query(left, right, threshold);
            int expected = -1;
            assert((localResult == expected));
        }
        {
            int left = 2;
            int right = 3;
            int threshold = 2;
            auto localResult = localObject.query(left, right, threshold);
            int expected = 2;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
