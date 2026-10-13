/*
 * Problem: 3709. 设计考试分数记录器 / Design Exam Scores Tracker
 * Link: https://leetcode.cn/problems/design-exam-scores-tracker/
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

class ExamTracker {
public:
    ExamTracker() {
        // TODO: 在这里实现你的解法。
    }
    
    void record(int time, int score) {
        // TODO: 在这里实现你的解法。
        (void)time;
        (void)score;
    }
    
    long long totalScore(int startTime, int endTime) {
        // TODO: 在这里实现你的解法。
        (void)startTime;
        (void)endTime;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        ExamTracker localObject;
        {
            int time = 1;
            int score = 98;
            localObject.record(time, score);
        }
        {
            int startTime = 1;
            int endTime = 1;
            auto localResult = localObject.totalScore(startTime, endTime);
            long long expected = 98LL;
            assert((localResult == expected));
        }
        {
            int time = 5;
            int score = 99;
            localObject.record(time, score);
        }
        {
            int startTime = 1;
            int endTime = 3;
            auto localResult = localObject.totalScore(startTime, endTime);
            long long expected = 98LL;
            assert((localResult == expected));
        }
        {
            int startTime = 1;
            int endTime = 5;
            auto localResult = localObject.totalScore(startTime, endTime);
            long long expected = 197LL;
            assert((localResult == expected));
        }
        {
            int startTime = 3;
            int endTime = 4;
            auto localResult = localObject.totalScore(startTime, endTime);
            long long expected = 0LL;
            assert((localResult == expected));
        }
        {
            int startTime = 2;
            int endTime = 5;
            auto localResult = localObject.totalScore(startTime, endTime);
            long long expected = 99LL;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
