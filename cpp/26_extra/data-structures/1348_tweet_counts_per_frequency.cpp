/*
 * Problem: 1348. 推文计数 / Tweet Counts Per Frequency
 * Link: https://leetcode.cn/problems/tweet-counts-per-frequency/
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

class TweetCounts {
public:
    TweetCounts() {
        // TODO: 在这里实现你的解法。
    }
    
    void recordTweet(string tweetName, int time) {
        // TODO: 在这里实现你的解法。
        (void)tweetName;
        (void)time;
    }
    
    vector<int> getTweetCountsPerFrequency(string freq, string tweetName, int startTime, int endTime) {
        // TODO: 在这里实现你的解法。
        (void)freq;
        (void)tweetName;
        (void)startTime;
        (void)endTime;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        TweetCounts localObject;
        {
            string tweetName = "tweet3";
            int time = 0;
            localObject.recordTweet(tweetName, time);
        }
        {
            string tweetName = "tweet3";
            int time = 60;
            localObject.recordTweet(tweetName, time);
        }
        {
            string tweetName = "tweet3";
            int time = 10;
            localObject.recordTweet(tweetName, time);
        }
        {
            string freq = "minute";
            string tweetName = "tweet3";
            int startTime = 0;
            int endTime = 59;
            auto localResult = localObject.getTweetCountsPerFrequency(freq, tweetName, startTime, endTime);
            vector<int> expected = {2};
            assert((localResult == expected));
        }
        {
            string freq = "minute";
            string tweetName = "tweet3";
            int startTime = 0;
            int endTime = 60;
            auto localResult = localObject.getTweetCountsPerFrequency(freq, tweetName, startTime, endTime);
            vector<int> expected = {2, 1};
            assert((localResult == expected));
        }
        {
            string tweetName = "tweet3";
            int time = 120;
            localObject.recordTweet(tweetName, time);
        }
        {
            string freq = "hour";
            string tweetName = "tweet3";
            int startTime = 0;
            int endTime = 210;
            auto localResult = localObject.getTweetCountsPerFrequency(freq, tweetName, startTime, endTime);
            vector<int> expected = {4};
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
