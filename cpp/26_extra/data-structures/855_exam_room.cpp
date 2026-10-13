/*
 * Problem: 855. 考场就座 / Exam Room
 * Link: https://leetcode.cn/problems/exam-room/
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

class ExamRoom {
public:
    ExamRoom(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
    }
    
    int seat() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    void leave(int p) {
        // TODO: 在这里实现你的解法。
        (void)p;
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int n = 10;
        ExamRoom localObject(n);
        {
            auto localResult = localObject.seat();
            int expected = 0;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.seat();
            int expected = 9;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.seat();
            int expected = 4;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.seat();
            int expected = 2;
            assert((localResult == expected));
        }
        {
            int p = 4;
            localObject.leave(p);
        }
        {
            auto localResult = localObject.seat();
            int expected = 5;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
