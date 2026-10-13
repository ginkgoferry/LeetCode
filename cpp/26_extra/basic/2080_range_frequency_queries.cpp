/*
 * Problem: 2080. 区间内查询数字的频率 / Range Frequency Queries
 * Link: https://leetcode.cn/problems/range-frequency-queries/
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

class RangeFreqQuery {
public:
    RangeFreqQuery(vector<int>& arr) {
        // TODO: 在这里实现你的解法。
        (void)arr;
    }
    
    int query(int left, int right, int value) {
        // TODO: 在这里实现你的解法。
        (void)left;
        (void)right;
        (void)value;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        vector<int> arr = {12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56};
        RangeFreqQuery localObject(arr);
        {
            int left = 1;
            int right = 2;
            int value = 4;
            auto localResult = localObject.query(left, right, value);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int left = 0;
            int right = 11;
            int value = 33;
            auto localResult = localObject.query(left, right, value);
            int expected = 2;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
